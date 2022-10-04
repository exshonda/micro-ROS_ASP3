
APPL_DIRS += ../micro_ros_arduino/src
APPL_CXXOBJS += micro_ros_arduino.o
APPL_CXXOBJS += pinmode.o

INCLUDES += -I../micro_ros_arduino/src
INCLUDES += -I../microros/install/include

LDFLAGS += -L../microros

LIBS += -lmicroros

