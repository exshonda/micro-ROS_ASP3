#include "micro_ros_arduino.h"
#include <kernel.h>
#include <t_stdlib.h>
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
#include "main.h"
#include <time.h>
#include <errno.h>

#ifndef CLOCK_MONOTONIC
#define CLOCK_MONOTONIC 0
#endif

/*
 *  サービスコールのエラーのログ出力
 */
Inline void
svc_perror(const char *file, int_t line, const char *expr, ER ercd)
{
	if (ercd < 0) {
		t_perror(LOG_ERROR, file, line, expr, ercd);
	}
}

#define	SVC_PERROR(expr)	svc_perror(__FILE__, __LINE__, #expr, (expr))

extern "C" int clock_gettime(clockid_t clk_id, struct timespec *tp)
{
	SYSTIM now = 0;

	if ((clk_id != CLOCK_REALTIME) && (clk_id != CLOCK_MONOTONIC))
		return -EINVAL;

	get_tim(&now);
	tp->tv_sec = now / 1000000;
	tp->tv_nsec = (now % 1000000) * 1000;

	return 0;
}

extern "C" bool arduino_transport_open(struct uxrCustomTransport * transport)
{
	ER_UINT	ercd;

	ercd = serial_opn_por((ID)transport->args);
	if (ercd < 0 && MERCD(ercd) != E_OBJ) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_opn_por'.",
									itron_strerror(ercd), SERCD(ercd));
		return false;
	}
	SVC_PERROR(serial_ctl_por((ID)transport->args,
							(IOCTL_CRLF | IOCTL_FCSND | IOCTL_FCRCV)));

	return true;
}

extern "C" bool arduino_transport_close(struct uxrCustomTransport * transport)
{
	ER_UINT	ercd;

	ercd = serial_cls_por((ID)transport->args);
	if (ercd < 0 && MERCD(ercd) != E_OBJ) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_cls_por'.",
									itron_strerror(ercd), SERCD(ercd));
		return false;
	}

	return true;
}

extern "C" size_t arduino_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err)
{
	ER_UINT	ercd;

	ercd = serial_wri_dat((ID)transport->args, (const char *)buf, len);
	if (ercd < 0 && MERCD(ercd) != E_OBJ) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_wri_dat'.",
									itron_strerror(MERCD(ercd)), SERCD(ercd));
		if (err != NULL)
			*err = MERCD(ercd);
		return false;
	}

	if (err != NULL)
		*err = 0;

	return true;
}

extern "C" size_t arduino_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err)
{
	ER_UINT	ercd;

	ercd = serial_rea_dat((ID)transport->args, (char *)buf, len);
	if (ercd < 0 && MERCD(ercd) != E_OBJ) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_rea_dat'.",
									itron_strerror(MERCD(ercd)), SERCD(ercd));
		if (err != NULL)
			*err = MERCD(ercd);
		return false;
	}

	if (err != NULL)
		*err = 0;

	return true;
}