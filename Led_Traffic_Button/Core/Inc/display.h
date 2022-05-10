/*
 * display.h
 *
 *  Created on: Oct 18, 2021
 *      Author: DELL
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

void clearAll();
void display7SEG(int num);
void display7SEG1(int num);
void updateTrafficBuffer(int number, int number1);
void update7SEG1(int index1);
void update7SEG2(int index2);
void display_Traffic_mode1(void);
void display_Traffic_mode2(void);
void display_Traffic_mode3(void);
void display_Traffic_mode4(void);
void display_Traffic(void);


#endif /* INC_DISPLAY_H_ */
