/*
 *  ホストからの送付
 *  ros2 topic pub --once /SPIKE/motor std_msgs/Int8MultiArray "{layout: {dim: [], data_offset: 0}, data: [50, 50]}"
 * 
 */


#include <kernel.h>
#include <t_syslog.h>
#include <micro_ros_asp.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/header.h>
#include <std_msgs/msg/u_int8_multi_array.h>
#include <std_msgs/msg/int8_multi_array.h>

//Add
#include <sensor_msgs/msg/range.h>
//Add
#include <micro_ros_utilities/type_utilities.h>
#include <micro_ros_utilities/string_utilities.h>

#include <spike/hub/system.h>
#include <spike/hub/display.h>
#include <spike/pup/motor.h>
#include <spike/pup/colorsensor.h>

#include <stdio.h>
#include <time.h>
#include "linetrace.h"

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop(temp_rc);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}


/*
 *  For miro-ROS
 */
rcl_publisher_t color_publisher;
rcl_subscription_t motor_subscriber;

/* 
 * How to use mullti array https://github.com/micro-ROS/micro_ros_arduino/issues/413
 */
std_msgs__msg__UInt8MultiArray color_msg;
std_msgs__msg__Int8MultiArray motor_msg;

#define MOTOR_MSG_SIZE 2
#define COLOR_MSG_SIZE 3

static int8_t motor_msg_buffer[MOTOR_MSG_SIZE];
static uint8_t color_msg_buffer[COLOR_MSG_SIZE];


/*
 *  For spike-rt
 */
#define PBIO_PORT_ID_LMOTOR PBIO_PORT_ID_A
#define PBIO_PORT_ID_RMOTOR PBIO_PORT_ID_B
#define PBIO_PORT_ID_COLOR  PBIO_PORT_ID_C

pup_motor_t *lmotor_handle;
pup_motor_t *rmotor_handle;
pup_device_t *color_handle;


void error_loop(rcl_ret_t temp_rc){
    syslog(LOG_NOTICE, "error_loop %d\n", temp_rc);
    while(1){
        dly_tsk(100);
    }
}


void 
color_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
    pup_color_rgb_t rgb;
    static int cnt = 0;

    rgb = pup_color_sensor_rgb(color_handle);

    color_msg.data.data[0] = rgb.r;
    color_msg.data.data[1] = rgb.g;
    color_msg.data.data[2] = rgb.b;

    rcl_publish(&color_publisher, (const void*)&color_msg, NULL);

    if (++cnt == 1) {
        syslog(LOG_NOTICE, "Color publisher : %d, %d, %d.", rgb.r, rgb.g, rgb.b);
        cnt = 0;
    }
}


void 
motor_subscription_callback(const void * msgin)
{
    const std_msgs__msg__Int8MultiArray * msg = (const std_msgs__msg__Int8MultiArray *)msgin;
    pbio_error_t err;
    
    syslog(LOG_NOTICE, "/SPIKE/motor %d, %d", msg->data.data[0], msg->data.data[1]);

    err = pup_motor_set_speed(rmotor_handle, msg->data.data[0]);
    if (err != PBIO_SUCCESS) {
        syslog(LOG_NOTICE, "Right motor set speed error.");
        hub_system_shutdown();
    }

    err = pup_motor_set_speed(lmotor_handle, msg->data.data[1]);
    if (err != PBIO_SUCCESS) {
        syslog(LOG_NOTICE, "Left motor set speed error.");
        hub_system_shutdown();
    }    
    
}


void
setup_motor(void)
{
    pbio_error_t err;
    
    lmotor_handle = pup_motor_get_device(PBIO_PORT_ID_LMOTOR);
    
    if (lmotor_handle == NULL) {
        syslog(LOG_NOTICE, "Left motor does not connect the Port %c.", PBIO_PORT_ID_LMOTOR);
        hub_system_shutdown();
    }
    
    rmotor_handle = pup_motor_get_device(PBIO_PORT_ID_RMOTOR);
    
    if (rmotor_handle == NULL) {
        syslog(LOG_NOTICE, "Right motor does not connect the Port %c.", PBIO_PORT_ID_RMOTOR);
        hub_system_shutdown();
    }

    err = pup_motor_setup(rmotor_handle, PUP_DIRECTION_CLOCKWISE, true);
    if (err != PBIO_SUCCESS) {
        syslog(LOG_NOTICE, "Left motor setup error.");
        hub_system_shutdown();
    }

    err = pup_motor_setup(lmotor_handle, PUP_DIRECTION_CLOCKWISE, true);
    if (err != PBIO_SUCCESS) {
        syslog(LOG_NOTICE, "Right motor setup error.");
        hub_system_shutdown();
    }    
}


void
setup_color(void)
{
    color_handle = pup_color_sensor_get_device(PBIO_PORT_ID_COLOR);

    if (color_handle == NULL) {
        syslog(LOG_NOTICE, "Color Sensor does not connect the Port %c.", PBIO_PORT_ID_COLOR);
        hub_system_shutdown();
    }    
}


/*
 *  miro-ROS global variable
 */
rclc_executor_t executor;
rcl_node_t      node;
rclc_support_t  support;
rcl_timer_t     timer;
rcl_allocator_t allocator;

void 
setup_uros() {
    // Set transports
    set_microros_transports(UROS_PORTID);

    allocator = rcl_get_default_allocator();

    // Create init_options
    RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

    // Create node
    RCCHECK(rclc_node_init_default(&node, "linetrace_node", "", &support));

    // Create a reliable color publisher
    RCCHECK(rclc_publisher_init_default(&color_publisher, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8MultiArray), "/SPIKE/color"));

    // Create a motor subscriber
    RCCHECK(rclc_subscription_init_default(&motor_subscriber, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int8MultiArray), "/SPIKE/motor"));

    // Create a 2 seconds color timer,
    RCCHECK(rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(1000), color_timer_callback));

    color_msg.data.capacity = COLOR_MSG_SIZE;
    color_msg.data.size = COLOR_MSG_SIZE;
    color_msg.data.data = color_msg_buffer;

    motor_msg.data.capacity = COLOR_MSG_SIZE;
    motor_msg.data.size = MOTOR_MSG_SIZE; //常に COLOR_MSG_SIZE なのでここで設定
    motor_msg.data.data = motor_msg_buffer;
    
    // Create executor
    RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator)); //2 : number of sub and timer 
    RCCHECK(rclc_executor_add_timer(&executor, &timer));
    RCCHECK(rclc_executor_add_subscription(&executor, &motor_subscriber, &motor_msg,
        &motor_subscription_callback, ON_NEW_DATA));    
}


/*
 *  Main Task
 */
void 
main_task(intptr_t exinf)
{
    syslog(LOG_NOTICE, "LineTraceTask : start");

    setup_motor();

    setup_color();
    
    setup_uros();
    
    syslog(LOG_NOTICE, "LineTraceTask : init done.");

    while(1){
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
        dly_tsk(1000);
    }

    // Free resources
    RCCHECK(rcl_publisher_fini(&color_publisher, &node));    
    RCCHECK(rcl_subscription_fini(&motor_subscriber, &node));
    RCCHECK(rcl_node_fini(&node));

    hub_system_shutdown();
}
