
APPL_DIRS += $(MIROROS_ASP3_TOP_DIR)/micro_ros_asp
APPL_COBJS += micro_ros_asp.o

INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/micro_ros_asp
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/action_msgs/include/action_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/actionlib_msgs/include/actionlib_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/builtin_interfaces/include/builtin_interfaces
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/composition_interfaces/include/composition_interfaces
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/diagnostic_msgs/include/diagnostic_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/example_interfaces/include/example_interfaces
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/geometry_msgs/include/geometry_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/libyaml_vendor/include/libyaml_vendor
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/lifecycle_msgs/include/lifecycle_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/micro_ros_msgs/include/micro_ros_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/micro_ros_utilities/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/microcdr/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/microxrcedds_client/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/nav_msgs/include/nav_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rcl/include/rcl
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rcl_action/include/rcl_action
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rcl_interfaces/include/rcl_interfaces
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rcl_lifecycle/include/rcl_lifecycle
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rcl_logging_interface/include/rcl_logging_interface
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rclc/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rclc_lifecycle/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rclc_parameter/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rcutils/include/rcutils
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rmw/include/rmw
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rmw_microxrcedds/include
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rosgraph_msgs/include/rosgraph_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rosidl_runtime_c/include/rosidl_runtime_c
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rosidl_typesupport_c/include/rosidl_typesupport_c
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rosidl_typesupport_interface/include/rosidl_typesupport_interface
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rosidl_typesupport_introspection_c/include/rosidl_typesupport_introspection_c
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/rosidl_typesupport_microxrcedds_c/include/rosidl_typesupport_microxrcedds_c
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/sensor_msgs/include/sensor_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/shape_msgs/include/shape_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/statistics_msgs/include/statistics_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/std_msgs/include/std_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/std_srvs/include/std_srvs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/stereo_msgs/include/stereo_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/test_msgs/include/test_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/tracetools/include/tracetools
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/trajectory_msgs/include/trajectory_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/unique_identifier_msgs/include/unique_identifier_msgs
INCLUDES += -I$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)/install/visualization_msgs/include/visualization_msgs

LDFLAGS += -L$(MIROROS_ASP3_TOP_DIR)/$(MCU_WS)

LIBS += -lmicroros

