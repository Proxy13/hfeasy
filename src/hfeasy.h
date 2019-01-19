#ifndef _HFEASY_H_
#define _HFEASY_H_

#include <hsf.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "config.h"
#include "gpio.h"
#include "httpd.h"
#include "mqttcli.h"


#define HFEASY_VERSION_MAJOR	0
#define HFEASY_VERSION_MINOR	1


enum {
	HFTIMER_ID_DEBOUNCE = 0,
	HFTIMER_ID_BUZZER,
	HFTIMER_ID_RESET,
	HFTIMER_ID_LED,
};

#endif
