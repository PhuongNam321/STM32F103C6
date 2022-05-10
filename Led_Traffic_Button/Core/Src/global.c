/*
 * global.c
 *
 *  Created on: Oct 18, 2021
 *      Author: DELL
 */

//int counter_Red_current = 50;
int time_Red_current = 50;
int counter_Red_update = 50;
int time_Red_update = 50;

//int counter_Green_current = 30;
int time_Green_current = 30;
int counter_Green_update = 30;
int time_Green_update = 30;

//int counter_Yellow_current = 20;
int time_Yellow_current = 20;
int counter_Yellow_update = 20;
int time_Yellow_update = 20;

int counter = 0;


enum MODE{INIT,MODE1,MODE2,MODE3,MODE4};
enum MODE Mode = INIT;
enum status_Traffic{statusRed1,statusYellow1,statusGreen1,statusRed2};
enum status_Traffic status_Traffic = statusRed1;
