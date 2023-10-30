#
#  ROS2 Version
#
ROS_DISTRO = humble

#
#  Target
#
include ../Makefile.config

SHELL=/bin/bash

SOURCE_ROS2 = source /opt/ros/$(ROS_DISTRO)/setup.bash
SOURCE_MICRO_ROS = source ./uros_ws/install/local_setup.bash

#
# Setup micro-ROS
#
setup_micro-ros: 
	make apt_micro-ros
	make clone_micro-ros
	make init_micro-ros

apt_micro-ros: 
	sudo apt update
	source /opt/ros/$(ROS_DISTRO)/setup.bash
	sudo apt install -y python3-pip python3-nose clang-format pyflakes3 python3-mypy python3-pytest-mock gperf \
                        ros-$(ROS_DISTRO)-osrf-testing-tools-cpp python3-lttng ros-$(ROS_DISTRO)-mimick-vendor \
                        python3-babeltrace python3-rosdep2 python3-colcon-common-extensions

clone_micro-ros:
	git clone -b humble https://github.com/micro-ROS/micro_ros_setup.git uros_ws/src/micro_ros_setup

init_micro-ros:
	$(SOURCE_ROS2); \
    cd ./uros_ws/; rosdep update && rosdep install --from-path src --ignore-src -y; colcon build

init_firmware:
	mkdir -p ./$(BUILDTARGET)
	$(SOURCE_ROS2); \
    $(SOURCE_MICRO_ROS); \
    cd ./$(BUILDTARGET); ros2 run micro_ros_setup create_firmware_ws.sh generate_lib

build_firmware:
	$(SOURCE_ROS2); \
    $(SOURCE_MICRO_ROS); \
    cd ./$(BUILDTARGET); ros2 run micro_ros_setup build_firmware.sh \
    $$(pwd)/../../micro_ros_asp/$(BUILDTARGET)_toolchain.cmake \
    $$(pwd)/../../micro_ros_asp/asp_colcon.meta

.PHONY: setup_micro-ros
