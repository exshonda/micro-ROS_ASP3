// SPDX-License-Identifier: MIT
/*
 * Stubs for Newlib.
 * For details, please see the official document
 *  - https://sourceware.org/newlib/libc.html#Stubs
 *
 * Copyright (c) 2022 Embedded and Real-Time Systems Laboratory,
 *                    Graduate School of Information Science, Nagoya Univ., JAPAN
 */

#include <kernel.h>
#include <t_stdlib.h>
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
#include <errno.h>
#include <sys/stat.h>

#undef errno
extern int errno;

void _exit(int status) {
  ext_ker();
  while(1);
}

int _close(int file) {
  return -1;
}

int _fstat(int file, struct stat *st) {
  st->st_mode = S_IFCHR;
  return 0;
}

int _getpid(void) {
  return 1;
}

int _isatty(int file) {
  return 1;
}

int _kill(int pid, int sig) {
  errno = EINVAL;
  return -1;
}

int _lseek(int file, int ptr, int dir) {
  return 0;
}

int _open(const char *name, int flags, int mode) {
  return -1;
}

int _read(int file, char *ptr, int len) {
  return 0;
}


#define HEAP_AREA_SIZE 16*1024

/*static*/ uint32_t heap_area[HEAP_AREA_SIZE] __attribute__((aligned(4096)));

void *_heap_param[2] = {
	(void *)heap_area,
	(void *)(HEAP_AREA_SIZE*sizeof(uint32_t))
};

static uintptr_t *heap_param = (uintptr_t *)_heap_param;

int
*_sbrk(int incr)
{ 
	static char *heap_end = NULL;
	char        *prev_heap_end;

	if(incr < 0 || incr > heap_param[1]){
		syslog_1(LOG_ERROR, "_sbrk: incr[%08x] parameter error !", incr);
		return (void *)-1;
	}

	if(heap_end == NULL)
		heap_end = (char *)heap_param[0];

	prev_heap_end  = heap_end;
	heap_end      += incr;

	if(heap_end < (char *)(heap_param[0]+heap_param[1]))
		return (void *) prev_heap_end;
	else{
		heap_end = prev_heap_end;
		syslog_1(LOG_ERROR, "_sbrk: incr[%08x] allocation error !", incr);
		return (void *)-1;
	}
}

long
_write(int fd, const void *buf, long count)
{
	if ((fd != 1) && (fd != 2))
		return 0;

	serial_wri_dat(1, (const char *)buf, count);

	return count;
}
