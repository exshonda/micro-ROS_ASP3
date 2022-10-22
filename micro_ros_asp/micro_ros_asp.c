#include "micro_ros_asp.h"
#include <kernel.h>
#include <t_stdlib.h>
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
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

int clock_gettime(clockid_t clk_id, struct timespec *tp)
{
	SYSTIM now = 0;

	if ((clk_id != CLOCK_REALTIME) && (clk_id != CLOCK_MONOTONIC))
		return -EINVAL;

	get_tim(&now);
	tp->tv_sec = now / 1000000;
	tp->tv_nsec = (now % 1000000) * 1000;

	return 0;
}

bool asp_transport_open(struct uxrCustomTransport * transport)
{
	ER_UINT	ercd;

	ercd = serial_opn_por((ID)transport->args);
	if (ercd < 0 && MERCD(ercd) != E_OBJ) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_opn_por'.",
									itron_strerror(ercd), SERCD(ercd));
		return false;
	}
	SVC_PERROR(serial_ctl_por((ID)transport->args, 0));

	return true;
}

bool asp_transport_close(struct uxrCustomTransport * transport)
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

size_t asp_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err)
{
	ER_UINT	ercd;

	ercd = serial_wri_dat((ID)transport->args, (const char *)buf, len);
	if (ercd < 0 && MERCD(ercd) != E_OBJ) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_wri_dat'.",
									itron_strerror(MERCD(ercd)), SERCD(ercd));
		if (err != NULL)
			*err = MERCD(ercd);
		return 0;
	}

	if (err != NULL)
		*err = 0;

	return ercd;
}

size_t asp_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err)
{
	ER_UINT	ercd;

	ercd = serial_trea_dat((ID)transport->args, (char *)buf, len, timeout);
	if (ercd < 0 && MERCD(ercd) != E_OBJ && MERCD(ercd) != E_TMOUT) {
		syslog(LOG_ERROR, "%s (%d) reported by `serial_rea_dat'.",
									itron_strerror(MERCD(ercd)), SERCD(ercd));
		if (err != NULL)
			*err = MERCD(ercd);
		return 0;
	}

	if (err != NULL)
		*err = 0;

	return ercd;
}
