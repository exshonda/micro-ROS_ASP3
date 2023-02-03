#include <kernel.h>
#include <t_syslog.h>
#include <micro_ros_asp.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/header.h>

//Add
#include <sensor_msgs/msg/range.h>
//Add
#include <micro_ros_utilities/type_utilities.h>
#include <micro_ros_utilities/string_utilities.h>

#include <spike/hub/display.h>

#include <stdio.h>
#include <time.h>
#include "uros.h"

#define STRING_BUFFER_LEN 50

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop(temp_rc);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

rcl_publisher_t button_publisher;
rcl_subscription_t led_subscriber;

std_msgs__msg__Header led_msg;
std_msgs__msg__Header button_msg;

int device_id;
int seq_no;
int led_count;

static char led_msg_buffer[STRING_BUFFER_LEN];
static char button_msg_buffer[STRING_BUFFER_LEN];

void error_loop(rcl_ret_t temp_rc){
	syslog(LOG_NOTICE, "error_loop %d\n", temp_rc);
	while(1){
		dly_tsk(100);
	}
}

extern int button_state;

void 
button_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	RCLC_UNUSED(last_call_time);

	if (timer != NULL) {
		seq_no = rand();
		if (button_state == 1) {
            sprintf(button_msg.frame_id.data, "%d_%d:LEFT", seq_no, device_id);
        }
        else if (button_state == 2) {
            sprintf(button_msg.frame_id.data, "%d_%d:RIGHT", seq_no, device_id);
        }
		else if (button_state == 3) {
            sprintf(button_msg.frame_id.data, "%d_%d:CENTER", seq_no, device_id);
        }
		else if (button_state == 4) {
            sprintf(button_msg.frame_id.data, "%d_%d:BT", seq_no, device_id);
        }
        else {
            sprintf(button_msg.frame_id.data, "%d_%d:NONE", seq_no, device_id);
        }

		button_state = 0;

		button_msg.frame_id.size = strlen(button_msg.frame_id.data);

		// Fill the message timestamp
		struct timespec ts;
		clock_gettime(CLOCK_REALTIME, &ts);
		button_msg.stamp.sec = ts.tv_sec;
		button_msg.stamp.nanosec = ts.tv_nsec;

		// Publish the message
		rcl_publish(&button_publisher, (const void*)&button_msg, NULL);
		syslog(LOG_NOTICE, "miro-ROS main task : Send seq %s\n", button_msg.frame_id.data);
	}
}

void 
led_subscription_callback(const void * msgin)
{
	const std_msgs__msg__Header * msg = (const std_msgs__msg__Header *)msgin;

	syslog(LOG_NOTICE, "SPIKELed seq %s (%d)\n", msg->frame_id.data, led_count++);

	hub_display_char(msg->frame_id.data[0]);
}

/*
 *  メインタスク
 */
void 
uros_task(intptr_t exinf)
{
	syslog(LOG_NOTICE, "miro-ROS main task : start");

	// Set transports
	set_microros_transports(UROS_PORTID);

	rcl_allocator_t allocator = rcl_get_default_allocator();
	rclc_support_t support;

	// Create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// Create node
	rcl_node_t node;
	RCCHECK(rclc_node_init_default(&node, "buttonled_node", "", &support));

	// Create a reliable button publisher
	RCCHECK(rclc_publisher_init_default(&button_publisher, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header), "/SPIKE/Button"));

	// Create a best effort led subscriber
	RCCHECK(rclc_subscription_init_best_effort(&led_subscriber, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header), "/SPIKE/Led"));

	// Create a 2 seconds button timer,
	rcl_timer_t timer;
	RCCHECK(rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(2000), button_timer_callback));

	// Create executor
	rclc_executor_t executor;
	RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator)); //2 : number of sub and timer 
	RCCHECK(rclc_executor_add_timer(&executor, &timer));
	RCCHECK(rclc_executor_add_subscription(&executor, &led_subscriber, &led_msg,
		&led_subscription_callback, ON_NEW_DATA));
	
	// Create and allocate the  messages	
	button_msg.frame_id.data = button_msg_buffer;
	button_msg.frame_id.capacity = STRING_BUFFER_LEN;

	led_msg.frame_id.data = led_msg_buffer;
	led_msg.frame_id.capacity = STRING_BUFFER_LEN;

	device_id = rand();

	led_count = 0;

    syslog(LOG_NOTICE, "miro-ROS main task : init done.");

    hub_display_off();
    hub_display_orientation(PBIO_SIDE_TOP);

	while(1){
		rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
		dly_tsk(1);
	}

	// Free resources
	RCCHECK(rcl_publisher_fini(&button_publisher, &node));	
	RCCHECK(rcl_subscription_fini(&led_subscriber, &node));
	RCCHECK(rcl_node_fini(&node));
}
