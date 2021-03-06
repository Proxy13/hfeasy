#ifndef _GPIO_H_
#define _GPIO_H_

#include <hsf.h>

#define GPIO_BUZZER            (HFGPIO_F_USER_DEFINE+0)
#define GPIO_LED               (HFGPIO_F_USER_DEFINE+0)
#define GPIO_RELAY             (HFGPIO_F_USER_DEFINE+1)
#define GPIO_SWITCH            (HFGPIO_F_USER_DEFINE+2)

/* dimmer module */
#define GPIO_SWITCH_DN         (HFGPIO_F_USER_DEFINE+5) /* pin labels on the pcb are swapped */
#define GPIO_SWITCH_UP         (HFGPIO_F_USER_DEFINE+1) /* against the original fw: up is down, down is up */
#define GPIO_I2C_SCL           (HFGPIO_F_USER_DEFINE+3)
#define GPIO_I2C_SDA           (HFGPIO_F_USER_DEFINE+4)


#define RELAY_OFF              0
#define RELAY_ON               1
#define RELAY_TOGGLE           2

#define RELAY_SRC_HTTP         0
#define RELAY_SRC_MQTT         1
#define RELAY_SRC_TIMER        2
#define RELAY_SRC_SWITCH       3
#define RELAY_SRC_SWITCH_UP    4
#define RELAY_SRC_SWITCH_DN    5


void USER_FUNC gpio_init(void);
void USER_FUNC gpio_set_dimmer(uint8_t lvl, uint8_t publish, uint8_t source);
void USER_FUNC gpio_set_relay(uint8_t action, uint8_t publish, uint8_t source);
int USER_FUNC gpio_get_state(int fid);

#endif
