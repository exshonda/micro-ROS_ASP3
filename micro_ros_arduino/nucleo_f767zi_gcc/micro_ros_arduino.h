
#ifndef MICRO_ROS_ARDUINO
#define MICRO_ROS_ARDUINO

// ---- Build fixes -----
//Removing __attribute__ not supported by gcc-arm-none-eabi-5_4
#define __attribute__(x)

#include <uxr/client/transport.h>
#include <rmw_microros/rmw_microros.h>
#include <time.h>

extern "C" int clock_gettime(clockid_t clk_id, struct timespec *tp);

extern "C" bool arduino_transport_open(struct uxrCustomTransport * transport);
extern "C" bool arduino_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t arduino_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t arduino_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

static inline void set_microros_transports(int port){
	rmw_uros_set_custom_transport(
		true,
		(void *)port,
		arduino_transport_open,
		arduino_transport_close,
		arduino_transport_write,
		arduino_transport_read
	);
}

#endif  // MICRO_ROS_ARDUINO
