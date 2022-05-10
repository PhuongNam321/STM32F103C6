/*
 * display.h
 *
 *  Created on: Nov 6, 2021
 *      Author: DELL
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

extern int hours_current;
extern int minute_current;

void clear_all_clock(void);
void setNumberOnClock(int number);
void display_clock(void);

#endif /* INC_DISPLAY_H_ */
