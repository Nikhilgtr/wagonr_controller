/*
 * controller.h
 *
 *  Created on: Dec 27, 2023
 *      Author: Nikhilgtr
 */

#ifndef APPLICATION_USER_CORE_CONTROLLER_H_
#define APPLICATION_USER_CORE_CONTROLLER_H_

#include <stdint.h>

#define MAX_CONTROLLER_NAME 20

enum controller_types {
	FOG_LAMP_H = 1,
	DEFOGGER,
	AMBIENT_LIGHT,
	REAR_CAMERA,
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

struct controller_dev {
	char name[MAX_CONTROLLER_NAME];
	int state;
};

void
controller_init(void);

void controller_dump_state(void);

void controller_update_lcd(enum controller_types type, int mode);

void controller_toggle_state(enum controller_types type);

void controller_splash(void);

uint32_t controller_get_encoder_period(void);

#endif /* APPLICATION_USER_CORE_CONTROLLER_H_ */
