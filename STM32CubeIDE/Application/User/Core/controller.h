/*
 * controller.h
 *
 *  Created on: Dec 27, 2023
 *      Author: Nikhilgtr
 */

#ifndef APPLICATION_USER_CORE_CONTROLLER_H_
#define APPLICATION_USER_CORE_CONTROLLER_H_

#include <stdint.h>
#include "main.h"

#define MAX_CONTROLLER_NAME 20

enum controller_types {
	FOG_LAMP_H = 1,
	DEFOGGER,
	AMBIENT_LIGHT,
	REAR_CAMERA,
	BUZZER,
	MAX_CONTORLLER_TYPES
};

enum controller_state {
	OFF = 0,
	ON = !OFF
};

enum controller_mode {
	DUMP,
	EDIT
};

enum controller_beep_type {
	SET_BEEP,
	SCROLL_BEEP
};

struct controller_pin {
	uint16_t pin;
	GPIO_TypeDef *port;
};

struct controller_dev {
	char name[MAX_CONTROLLER_NAME];
	int state;
	struct controller_pin op_pin;
};

void
controller_init(void);

void controller_dump_state(void);

void controller_update_lcd(enum controller_types type, int mode);

void controller_toggle_state(enum controller_types type);

void controller_splash(void);

void controller_beep(int type, int beep_type);

void controller_set_current_state(enum controller_types type, int state);

#endif /* APPLICATION_USER_CORE_CONTROLLER_H_ */
