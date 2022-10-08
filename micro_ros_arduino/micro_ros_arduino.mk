
APPL_DIRS += ../micro_ros_arduino/$(TARGET)
APPL_CXXOBJS += micro_ros_arduino.o
APPL_CXXOBJS += pinmode.o

INCLUDES += -I../micro_ros_arduino/$(TARGET)
INCLUDES += -I../microros/install/action_msgs/include/action_msgs
INCLUDES += -I../microros/install/actionlib_msgs/include/actionlib_msgs
INCLUDES += -I../microros/install/builtin_interfaces/include/builtin_interfaces
INCLUDES += -I../microros/install/composition_interfaces/include/composition_interfaces
INCLUDES += -I../microros/install/diagnostic_msgs/include/diagnostic_msgs
INCLUDES += -I../microros/install/example_interfaces/include/example_interfaces
INCLUDES += -I../microros/install/geometry_msgs/include/geometry_msgs
INCLUDES += -I../microros/install/libyaml_vendor/include/libyaml_vendor
INCLUDES += -I../microros/install/lifecycle_msgs/include/lifecycle_msgs
INCLUDES += -I../microros/install/micro_ros_msgs/include/micro_ros_msgs
INCLUDES += -I../microros/install/micro_ros_utilities/include/micro_ros_utilities
INCLUDES += -I../microros/install/microcdr/include
INCLUDES += -I../microros/install/microxrcedds_client/include
INCLUDES += -I../microros/install/nav_msgs/include/nav_msgs
INCLUDES += -I../microros/install/rcl/include/rcl
INCLUDES += -I../microros/install/rcl_action/include/rcl_action
INCLUDES += -I../microros/install/rcl_interfaces/include/rcl_interfaces
INCLUDES += -I../microros/install/rcl_lifecycle/include/rcl_lifecycle
INCLUDES += -I../microros/install/rcl_logging_interface/include/rcl_logging_interface
INCLUDES += -I../microros/install/rclc/include
INCLUDES += -I../microros/install/rclc_lifecycle/include
INCLUDES += -I../microros/install/rclc_parameter/include
INCLUDES += -I../microros/install/rcutils/include/rcutils
INCLUDES += -I../microros/install/rmw/include/rmw
INCLUDES += -I../microros/install/rmw_microxrcedds/include
INCLUDES += -I../microros/install/rosgraph_msgs/include/rosgraph_msgs
INCLUDES += -I../microros/install/rosidl_runtime_c/include/rosidl_runtime_c
INCLUDES += -I../microros/install/rosidl_typesupport_c/include/rosidl_typesupport_c
INCLUDES += -I../microros/install/rosidl_typesupport_interface/include/rosidl_typesupport_interface
INCLUDES += -I../microros/install/rosidl_typesupport_introspection_c/include
INCLUDES += -I../microros/install/rosidl_typesupport_microxrcedds_c/include/rosidl_typesupport_microxrcedds_c
INCLUDES += -I../microros/install/sensor_msgs/include/sensor_msgs
INCLUDES += -I../microros/install/shape_msgs/include/shape_msgs
INCLUDES += -I../microros/install/statistics_msgs/include/statistics_msgs
INCLUDES += -I../microros/install/std_msgs/include/std_msgs
INCLUDES += -I../microros/install/std_srvs/include/std_srvs
INCLUDES += -I../microros/install/stereo_msgs/include/stereo_msgs
INCLUDES += -I../microros/install/test_msgs/include/test_msgs
INCLUDES += -I../microros/install/tracetools/include/tracetools
INCLUDES += -I../microros/install/trajectory_msgs/include/trajectory_msgs
INCLUDES += -I../microros/install/unique_identifier_msgs/include/unique_identifier_msgs
INCLUDES += -I../microros/install/visualization_msgs/include/visualization_msgs

LDFLAGS += -L../microros

LIBS += -lmicroros

