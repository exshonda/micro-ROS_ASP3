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
setup_miro_ros: apt_micro_ros clone_micro-ros init_micro-ros init_firmware config_firmware

apt_micro_ros: 
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
	mkdir -p ./$(MIROROS_TARGET)
	$(SOURCE_ROS2); \
    $(SOURCE_MICRO_ROS); \
    cd ./$(MIROROS_TARGET); ros2 run micro_ros_setup create_firmware_ws.sh freertos $(MIROROS_TARGET)

config_firmware:
	$(SOURCE_ROS2); \
    $(SOURCE_MICRO_ROS); \
	cd ./$(MIROROS_TARGET); ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport serial --dev 3

#
# Build firmware
#
build_firmware:
	source /opt/ros/$(ROS_DISTRO)/setup.bash
	source ./uros_ws/install/local_setup.bash
	cd ./$(MIROROS_TARGET); ros2 run micro_ros_setup build_firmware.sh
