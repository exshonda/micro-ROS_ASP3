
APPL_DIRS += ../micro_ros_arduino/$(TARGET)
APPL_CXXOBJS += micro_ros_arduino.o
APPL_CXXOBJS += pinmode.o

INCLUDES += -I../micro_ros_arduino/$(TARGET)
INCLUDES += -I../$(MCU_WS)/install/action_msgs/include/action_msgs
INCLUDES += -I../$(MCU_WS)/install/actionlib_msgs/include/actionlib_msgs
INCLUDES += -I../$(MCU_WS)/install/builtin_interfaces/include/builtin_interfaces
INCLUDES += -I../$(MCU_WS)/install/composition_interfaces/include/composition_interfaces
INCLUDES += -I../$(MCU_WS)/install/diagnostic_msgs/include/diagnostic_msgs
INCLUDES += -I../$(MCU_WS)/install/example_interfaces/include/example_interfaces
INCLUDES += -I../$(MCU_WS)/install/geometry_msgs/include/geometry_msgs
INCLUDES += -I../$(MCU_WS)/install/libyaml_vendor/include/libyaml_vendor
INCLUDES += -I../$(MCU_WS)/install/lifecycle_msgs/include/lifecycle_msgs
INCLUDES += -I../$(MCU_WS)/install/micro_ros_msgs/include/micro_ros_msgs
INCLUDES += -I../$(MCU_WS)/install/micro_ros_utilities/include
INCLUDES += -I../$(MCU_WS)/install/microcdr/include
INCLUDES += -I../$(MCU_WS)/install/microxrcedds_client/include
INCLUDES += -I../$(MCU_WS)/install/nav_msgs/include/nav_msgs
INCLUDES += -I../$(MCU_WS)/install/rcl/include/rcl
INCLUDES += -I../$(MCU_WS)/install/rcl_action/include/rcl_action
INCLUDES += -I../$(MCU_WS)/install/rcl_interfaces/include/rcl_interfaces
INCLUDES += -I../$(MCU_WS)/install/rcl_lifecycle/include/rcl_lifecycle
INCLUDES += -I../$(MCU_WS)/install/rcl_logging_interface/include/rcl_logging_interface
INCLUDES += -I../$(MCU_WS)/install/rclc/include
INCLUDES += -I../$(MCU_WS)/install/rclc_lifecycle/include
INCLUDES += -I../$(MCU_WS)/install/rclc_parameter/include
INCLUDES += -I../$(MCU_WS)/install/rcutils/include/rcutils
INCLUDES += -I../$(MCU_WS)/install/rmw/include/rmw
INCLUDES += -I../$(MCU_WS)/install/rmw_microxrcedds/include
INCLUDES += -I../$(MCU_WS)/install/rosgraph_msgs/include/rosgraph_msgs
INCLUDES += -I../$(MCU_WS)/install/rosidl_runtime_c/include/rosidl_runtime_c
INCLUDES += -I../$(MCU_WS)/install/rosidl_typesupport_c/include/rosidl_typesupport_c
INCLUDES += -I../$(MCU_WS)/install/rosidl_typesupport_interface/include/rosidl_typesupport_interface
INCLUDES += -I../$(MCU_WS)/install/rosidl_typesupport_introspection_c/include/rosidl_typesupport_introspection_c
INCLUDES += -I../$(MCU_WS)/install/rosidl_typesupport_microxrcedds_c/include/rosidl_typesupport_microxrcedds_c
INCLUDES += -I../$(MCU_WS)/install/sensor_msgs/include/sensor_msgs
INCLUDES += -I../$(MCU_WS)/install/shape_msgs/include/shape_msgs
INCLUDES += -I../$(MCU_WS)/install/statistics_msgs/include/statistics_msgs
INCLUDES += -I../$(MCU_WS)/install/std_msgs/include/std_msgs
INCLUDES += -I../$(MCU_WS)/install/std_srvs/include/std_srvs
INCLUDES += -I../$(MCU_WS)/install/stereo_msgs/include/stereo_msgs
INCLUDES += -I../$(MCU_WS)/install/test_msgs/include/test_msgs
INCLUDES += -I../$(MCU_WS)/install/tracetools/include/tracetools
INCLUDES += -I../$(MCU_WS)/install/trajectory_msgs/include/trajectory_msgs
INCLUDES += -I../$(MCU_WS)/install/unique_identifier_msgs/include/unique_identifier_msgs
INCLUDES += -I../$(MCU_WS)/install/visualization_msgs/include/visualization_msgs

LDFLAGS += -L../$(MCU_WS)

LIBS += -lmicroros

