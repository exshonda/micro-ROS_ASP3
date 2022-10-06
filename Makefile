
MAKE = make

LIBKERNEL_F413 = libkernel/discovery_f413xx_gcc/libkernel.a
LIBKERNEL_F767 = libkernel/nucleo_f767zi_gcc/libkernel.a
LIBMICROROS = microros/libmicroros.a
PUBLISHER_ELF = micro-ros_publisher/Debug/asp.elf
SUBSCRIBER_ELF = micro-ros_subscriber/Debug/asp.elf

$(LIBKERNEL_F413):
	$(MAKE) -j -C libkernel/discovery_f413xx_gcc libkernel.a

$(LIBKERNEL_F767):
	$(MAKE) -j -C libkernel/nucleo_f767zi_gcc libkernel.a

$(LIBMICROROS):
	$(MAKE) -j -C microros all

$(PUBLISHER_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS)
	$(MAKE) -j -C micro-ros_publisher all

$(SUBSCRIBER_ELF): $(LIBKERNEL_F413) $(LIBKERNEL_F767) #$(LIBMICROROS)
	$(MAKE) -j -C micro-ros_subscriber all

.PHONY: refresh
refresh: 
	rm -f $(LIBKERNEL_F413)
	rm -f $(LIBKERNEL_F767)
#	rm -f $(LIBMICROROS)
	rm -f $(PUBLISHER_ELF)
	rm -f $(SUBSCRIBER_ELF)

.PHONY: all
all: refresh $(PUBLISHER_ELF) $(SUBSCRIBER_ELF)

.PHONY: clean
clean:
	$(MAKE) -j -C libkernel/discovery_f413xx_gcc clean
	$(MAKE) -j -C libkernel/nucleo_f767zi_gcc clean
#	$(MAKE) -j -C microros clean
	$(MAKE) -j -C micro-ros_publisher clean
	$(MAKE) -j -C micro-ros_subscriber clean

.PHONY: realclean
realclean:
	$(MAKE) -j -C libkernel/discovery_f413xx_gcc realclean
	$(MAKE) -j -C libkernel/nucleo_f767zi_gcc realclean
#	$(MAKE) -j -C microros clean
	$(MAKE) -j -C micro-ros_publisher clean
	$(MAKE) -j -C micro-ros_subscriber clean
