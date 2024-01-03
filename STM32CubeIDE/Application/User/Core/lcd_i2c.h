/*
 * lcd_i2c.h
 *
 *  Created on: Dec 26, 2023
 *      Author: Nikhilgtr
 */

#ifndef APPLICATION_USER_CORE_LCD_I2C_H_
#define APPLICATION_USER_CORE_LCD_I2C_H_

void lcd_init(void);
void lcd_write_string(char *str);
void lcd_set_cursor(uint8_t row, uint8_t column);
void lcd_clear(void);
void lcd_backlight(uint8_t state);

#endif /* APPLICATION_USER_CORE_LCD_I2C_H_ */
