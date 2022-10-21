
MAKE = make

LIBMICROROS_F413 = mcu_ws/libmicroros.a
LIBMICROROS_F767 = mcu_ws_f767zi/libmicroros.a
LIBKERNEL_F413 = sample/libkernel/discovery_f413xx_gcc/libkernel.a
LIBKERNEL_F767 = sample/libkernel/nucleo_f767zi_gcc/libkernel.a
PUBLISHER_ELF = sample/publisher/asp.elf
SUBSCRIBER_ELF = sample/subscriber/asp.elf
PING_PONG_ELF = sample/ping_pong/asp.elf
JOYSTICK_ELF = sample/joystick/asp.elf

$(LIBMICROROS_F413):
	$(MAKE) -j -C mcu_ws all

$(LIBMICROROS_F767):
	$(MAKE) -j -C mcu_ws_f767zi all

$(LIBKERNEL_F413):
	$(MAKE) -j -C sample/libkernel/discovery_f413xx_gcc libkernel.a

$(LIBKERNEL_F767):
	$(MAKE) -j -C sample/libkernel/nucleo_f767zi_gcc libkernel.a

$(PUBLISHER_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS_F413) $(LIBMICROROS_F767)
	$(MAKE) -j -C sample/publisher all

$(SUBSCRIBER_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS_F413) $(LIBMICROROS_F767)
	$(MAKE) -j -C sample/subscriber all

$(PING_PONG_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS_F413) $(LIBMICROROS_F767)
	$(MAKE) -j -C sample/ping_pong all

$(JOYSTICK_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS_F413) $(LIBMICROROS_F767)
	$(MAKE) -j -C sample/joystick all

.PHONY: refresh
refresh: 
#	rm -f $(LIBMICROROS_F413)
#	rm -f $(LIBMICROROS_F767)
	rm -f $(LIBKERNEL_F413)
	rm -f $(LIBKERNEL_F767)
	rm -f $(PUBLISHER_ELF)
	rm -f $(SUBSCRIBER_ELF)
	rm -f $(PING_PONG_ELF)
	rm -f $(JOYSTICK_ELF)

.PHONY: all
all: refresh $(PUBLISHER_ELF) $(SUBSCRIBER_ELF) $(PING_PONG_ELF) $(JOYSTICK_ELF)

.PHONY: clean
clean:
#	$(MAKE) -j -C mcu_ws clean
#	$(MAKE) -j -C mcu_ws_f767zi clean
	$(MAKE) -j -C sample/libkernel/discovery_f413xx_gcc clean
	$(MAKE) -j -C sample/libkernel/nucleo_f767zi_gcc clean
	$(MAKE) -j -C sample/publisher clean
	$(MAKE) -j -C sample/subscriber clean
	$(MAKE) -j -C sample/ping_pong clean
	$(MAKE) -j -C sample/joystick clean

.PHONY: realclean
realclean:
#	$(MAKE) -j -C mcu_ws clean
#	$(MAKE) -j -C mcu_ws_f767zi clean
	$(MAKE) -j -C sample/libkernel/discovery_f413xx_gcc realclean
	$(MAKE) -j -C sample/libkernel/nucleo_f767zi_gcc realclean
	$(MAKE) -j -C sample/publisher realclean
	$(MAKE) -j -C sample/subscriber realclean
	$(MAKE) -j -C sample/ping_pong realclean
	$(MAKE) -j -C sample/joystick realclean
