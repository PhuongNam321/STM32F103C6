/*
 * global.h
 *
 *  Created on: Oct 18, 2021
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

extern int time_Red_current;
extern int counter_Red_update;
extern int time_Red_update;

extern int time_Yellow_current;
extern int counter_Yellow_update;
extern int time_Yellow_update;

extern int time_Green_current;
extern int counter_Green_update;
extern int time_Green_update;

extern int counter;

extern int timer0_counter;
extern int timer0_flag;
extern int timer1_counter;
extern int timer1_flag;
extern int timer2_counter;
extern int timer2_flag;
extern int timer3_counter;
extern int timer3_flag;

extern int TIMER_CYCLE;

enum MODE{INIT,MODE1,MODE2,MODE3,MODE4};
extern enum MODE Mode;
enum status_Traffic{statusRed1,statusYellow1,statusGreen1,statusRed2};
extern enum status_Traffic status_Traffic;

#endif /* INC_GLOBAL_H_ */
