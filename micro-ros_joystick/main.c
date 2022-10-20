#include <stdio.h>
#include <time.h>

#include <kernel.h>
#include <micro_ros_asp.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <sensor_msgs/msg/imu.h>
#include <sensor_msgs/msg/joy.h>

#include <micro_ros_utilities/type_utilities.h>
#include <micro_ros_utilities/string_utilities.h>

#include "main.h"

int16_t textPosY = 0;
int16_t textPosX = 50;
int16_t cursorPosX = 30;
int16_t cursorPosY = 00;
int16_t cursorWidth = 10;
int16_t cursorHeight = 40;
int16_t cursorRadius = 5;
int16_t selectDeviceNum = 1;
int16_t maxDrawDevice = 6;

int16_t pageNum = 1;

static bool connected = false;

void controller();

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

rcl_publisher_t publisher;
sensor_msgs__msg__Imu imu_msg;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

rclc_executor_t executor;
rcl_subscription_t subscriber;
sensor_msgs__msg__Joy joy_msg;

void error_loop(){
	printf("error_loop\n");
	while(1){
		dly_tsk(100);
	}
}

void subscription_callback(const void * msgin)
{
	const sensor_msgs__msg__Imu * msg = (const sensor_msgs__msg__Imu *)msgin;
	printf("[%ld] ", msg->header.stamp.nanosec);
	printf("frame_id[%s] ", msg->header.frame_id.data);
	printf("angular_velocity[x:%f, y:%f, z:%f] ", msg->angular_velocity.x, msg->angular_velocity.y, msg->angular_velocity.z);
	printf("linear_acceleration[x:%f, y:%f, z:%f]\n", msg->linear_acceleration.x, msg->linear_acceleration.y, msg->linear_acceleration.z);
}

/*
 *  メインタスク
 */
void main_task(intptr_t exinf)
{
	dly_tsk(2000);

	printf("setup start\n");

	set_microros_transports(TASK_PORTID);
	printf("set_microros_transports\n");

	connected = true;

	allocator = rcl_get_default_allocator();
	printf("rcl_get_default_allocator\n");

	//create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));
	printf("rclc_support_init\n");

	// create node
	RCCHECK(rclc_node_init_default(&node, "controller_publisher", "", &support));
	printf("rclc_node_init_default\n");

	// create publisher
	RCCHECK(rclc_publisher_init_best_effort(&publisher, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Joy), "/zumo_joy"));
	printf("rclc_publisher_init_best_effort\n");

	// create subscriber
	RCCHECK(rclc_subscription_init_best_effort(&subscriber, &node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu), "/zumo_imu"));
	printf("rclc_subscription_init_best_effort\n");

	// create executor
	RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
	printf("rclc_executor_init\n");
	RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &imu_msg, &subscription_callback, ON_NEW_DATA));
	printf("rclc_executor_add_subscription\n");

	// memory
	if(!micro_ros_utilities_create_message_memory(
		ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Joy), &joy_msg, (micro_ros_utilities_memory_conf_t) {}))
	{
		error_loop();
	}
	printf("micro_ros_utilities_create_message_memory\n");
	joy_msg.buttons.size = 5;
	joy_msg.axes.size = 1;
	joy_msg.axes.data[0] = 0.0;
	joy_msg.header.frame_id =
	micro_ros_string_utilities_set(joy_msg.header.frame_id, "/joy");

	printf("setup end\n");

	while(1){
		if (connected) controller();

		rcl_ret_t temp_rc = rcl_publish(&publisher, &joy_msg, NULL);
		if(temp_rc != RCL_RET_OK) {
			printf("publisher err %ld\n", temp_rc);
		}

		RCCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
	}
}

void controller() {
	struct timespec tv = {0};
	clock_gettime(0, &tv);
	joy_msg.header.stamp.sec = tv.tv_sec;
	joy_msg.header.stamp.nanosec = tv.tv_nsec;
	int button = rand();
	
	if ((button & 0x01) == 0) {
		joy_msg.buttons.data[0] = 1;
	} else if ((button & 0x02) == 0) {
		joy_msg.buttons.data[1] = 1;
	} else if ((button & 0x04) == 0) {
		joy_msg.buttons.data[2] = 1;
	} else if ((button & 0x08) == 0) {
		joy_msg.buttons.data[3] = 1;
	} else if ((button & 0x10) == 0) {
		joy_msg.buttons.data[4] = 1;
	} else {
		joy_msg.buttons.data[0] = 0;
		joy_msg.buttons.data[1] = 0;
		joy_msg.buttons.data[2] = 0;
		joy_msg.buttons.data[3] = 0;
		joy_msg.buttons.data[4] = 0;
	}
}
