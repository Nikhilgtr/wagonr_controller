/*
 * controller.c
 *
 *  Created on: Dec 27, 2023
 *      Author: Nikhilgtr
 */

#include "controller.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "lcd_i2c.h"

#define LCD_EMPTY_SPACE "   "

static struct controller_dev dev[MAX_CONTORLLER_TYPES];
extern volatile int lcd_dump;

const char *
controller_get_name(enum controller_types type)
{
	switch(type)
	{
	case FOG_LAMP_H:
		return "FOG LAMP HIGH";
	case DEFOGGER:
		return "DEFOGGER";
	case AMBIENT_LIGHT:
		return "AMBIENT LIGHT";
	case REAR_CAMERA:
		return "REAR CAMERA";
	default:
		printf("Wrong Input\n\r");
	}
	return "NONE";
}

enum controller_state
controller_get_default_state(enum controller_types type)
{
	switch(type)
	{
	case FOG_LAMP_H:
		return OFF;
	case DEFOGGER:
		return OFF;
	case AMBIENT_LIGHT:
		return OFF;
	case REAR_CAMERA:
		return ON;
	default:
		printf("Wrong Input\n\r");
	}
	return OFF;
}

void
controller_init(void)
{
	uint8_t i;
	for(i = 0; i < MAX_CONTORLLER_TYPES; i++)
	{
		//copy name
		strcpy(dev[i].name, controller_get_name(i));
		dev[i].state = controller_get_default_state(i);
	}
}

void controller_dump_state(void)
{
	static enum controller_types type = FOG_LAMP_H;
	if(type == MAX_CONTORLLER_TYPES)
		type = FOG_LAMP_H;
	controller_update_lcd(type, DUMP);
	type++;
	lcd_dump = 0;
}

enum controller_state
controller_get_current_state(enum controller_types type)
{
	return dev[type].state;
}

void
controller_set_current_state(enum controller_types type, int state)
{
	dev[type].state = state;
}

void controller_update_lcd(enum controller_types type, int mode)
{
	char buf[20];
	sprintf(buf, "%d. %s", type ,controller_get_name(type));
    lcd_clear();
    lcd_set_cursor(0, 0);
    lcd_write_string(buf);
    lcd_set_cursor(1, 0);

    if(mode == EDIT)
    	sprintf(buf, "%s%s  -> EDIT", LCD_EMPTY_SPACE ,controller_get_current_state(type)? "ON": "OFF");
    else
    	sprintf(buf, "%s%s", LCD_EMPTY_SPACE ,controller_get_current_state(type)? "ON": "OFF");

    lcd_write_string(buf);
}

void controller_toggle_state(enum controller_types type)
{
	int state = controller_get_current_state(type);
	if(state)
		controller_set_current_state(type, OFF);
	else
		controller_set_current_state(type, ON);
}

void controller_splash(void)
{
    lcd_clear();
    lcd_set_cursor(0, 0);
    lcd_write_string("WGNR Controller");
    lcd_set_cursor(1, 0);
    lcd_write_string("By NG    V1.0");
    HAL_Delay(2000);
    lcd_clear();
    HAL_Delay(1000);
}

uint32_t controller_get_encoder_period(void)
{
	uint32_t period = 0;
	int i;
	for(i = 0; i < MAX_CONTORLLER_TYPES; i++)
		period |= 1 << i;
	return period;
}
