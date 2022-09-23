
MAKE = make

LIBKERNEL = asp3_f413xx/build/libkernel.a
LIBMICROROS = microros/libmicroros.a
PUBLISHER_ELF = micro-ros_publisher/Debug/asp.elf
SUBSCRIBER_ELF = micro-ros_subscriber/Debug/asp.elf

$(LIBKERNEL):
	$(MAKE) -j -C asp3_f413xx/build all

$(LIBMICROROS):
	$(MAKE) -j -C microros all

$(PUBLISHER_ELF): $(LIBKERNEL) $(LIBMICROROS)
	$(MAKE) -j -C micro-ros_publisher all

$(SUBSCRIBER_ELF): $(LIBKERNEL) $(LIBMICROROS)
	$(MAKE) -j -C micro-ros_subscriber all

.PHONY: refresh
refresh: 
	rm -f $(LIBKERNEL)
	rm -f $(LIBMICROROS)
	rm -f $(PUBLISHER_ELF)
	rm -f $(SUBSCRIBER_ELF)

.PHONY: all
all: refresh $(PUBLISHER_ELF) $(SUBSCRIBER_ELF)

.PHONY: clean
clean:
	$(MAKE) -j -C asp3_f413xx/build clean
	$(MAKE) -j -C microros clean
	$(MAKE) -j -C micro-ros_publisher clean
	$(MAKE) -j -C micro-ros_subscriber clean

.PHONY: realclean
realclean:
	$(MAKE) -j -C asp3_f413xx/build realclean
	$(MAKE) -j -C microros clean
	$(MAKE) -j -C micro-ros_publisher clean
	$(MAKE) -j -C micro-ros_subscriber clean
