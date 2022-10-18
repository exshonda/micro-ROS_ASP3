
MAKE = make

LIBKERNEL_F413 = libkernel/discovery_f413xx_gcc/libkernel.a
LIBKERNEL_F767 = libkernel/nucleo_f767zi_gcc/libkernel.a
LIBMICROROS = mcu_ws/libmicroros.a
PUBLISHER_ELF = micro-ros_publisher/asp.elf
SUBSCRIBER_ELF = micro-ros_subscriber/asp.elf
PING_PONG_ELF = micro-ros_ping_pong/asp.elf
JOYSTICK_ELF = micro-ros_joystick/asp.elf

$(LIBKERNEL_F413):
	$(MAKE) -j -C libkernel/discovery_f413xx_gcc libkernel.a

$(LIBKERNEL_F767):
	$(MAKE) -j -C libkernel/nucleo_f767zi_gcc libkernel.a

$(LIBMICROROS):
	$(MAKE) -j -C mcu_ws all

$(PUBLISHER_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS)
	$(MAKE) -j -C micro-ros_publisher all

$(SUBSCRIBER_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS)
	$(MAKE) -j -C micro-ros_subscriber all

$(PING_PONG_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS)
	$(MAKE) -j -C micro-ros_ping_pong all

$(JOYSTICK_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS)
	$(MAKE) -j -C micro-ros_joystick all

.PHONY: refresh
refresh: 
	rm -f $(LIBKERNEL_F413)
	rm -f $(LIBKERNEL_F767)
#	rm -f $(LIBMICROROS)
	rm -f $(PUBLISHER_ELF)
	rm -f $(SUBSCRIBER_ELF)
	rm -f $(PING_PONG_ELF)
	rm -f $(JOYSTICK_ELF)

.PHONY: all
all: refresh $(PUBLISHER_ELF) $(SUBSCRIBER_ELF) $(PING_PONG_ELF) $(JOYSTICK_ELF)

.PHONY: clean
clean:
	$(MAKE) -j -C libkernel/discovery_f413xx_gcc clean
	$(MAKE) -j -C libkernel/nucleo_f767zi_gcc clean
#	$(MAKE) -j -C mcu_ws clean
	$(MAKE) -j -C micro-ros_publisher clean
	$(MAKE) -j -C micro-ros_subscriber clean
	$(MAKE) -j -C micro-ros_ping_pong clean
	$(MAKE) -j -C micro-ros_joystick clean

.PHONY: realclean
realclean:
	$(MAKE) -j -C libkernel/discovery_f413xx_gcc realclean
	$(MAKE) -j -C libkernel/nucleo_f767zi_gcc realclean
#	$(MAKE) -j -C mcu_ws clean
	$(MAKE) -j -C micro-ros_publisher realclean
	$(MAKE) -j -C micro-ros_subscriber realclean
	$(MAKE) -j -C micro-ros_ping_pong realclean
	$(MAKE) -j -C micro-ros_joystick realclean
