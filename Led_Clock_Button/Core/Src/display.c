/*
 * display.c
 *
 *  Created on: Nov 6, 2021
 *      Author: DELL
 */

#include "main.h"
#include "reading.h"
#include "processing.h"
#include "timer.h"
#include "display.h"

int hours_current = 0;
int minute_current = 0;
int second = 0;

void clear_all_clock(void){
	HAL_GPIO_WritePin(GPIOB, LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin|LED5_Pin
							|LED6_Pin|LED7_Pin|LED8_Pin|LED9_Pin|LED10_Pin
							|LED11_Pin|LED12_Pin, GPIO_PIN_SET);
}

void setNumberOnClock(int number){
	switch(number){
	case 0:
		HAL_GPIO_WritePin(GPIOB, LED1_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, LED2_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, LED3_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, LED4_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, LED5_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, LED6_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, LED7_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, LED8_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, LED9_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, LED10_Pin, GPIO_PIN_RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(GPIOB, LED11_Pin, GPIO_PIN_RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(GPIOB, LED12_Pin, GPIO_PIN_RESET);
		break;
	case 12:
		HAL_GPIO_WritePin(GPIOB, LED1_Pin, GPIO_PIN_RESET);
		break;
	}
}

void display_clock_mode0(){
	HAL_GPIO_TogglePin(GPIOA, LED_Pin);
	clear_all_clock();
	setNumberOnClock(hours_current);
	setNumberOnClock(minute_current);
	setNumberOnClock(second++);
	if(second>=12){
		second = 0;
		setNumberOnClock(minute_current++);
	}
	if(minute_current>=12){
		minute_current = 0;
		setNumberOnClock(hours_current++);
	}
	if(hours_current>=12) hours_current = 0;
}

void display_clock_mode1(){
	clear_all_clock();
	setNumberOnClock(hours_current);
	HAL_GPIO_TogglePin(GPIOA, LED_1_Pin);
}

void display_clock_mode2(){
	clear_all_clock();
	setNumberOnClock(minute_current);
	HAL_GPIO_TogglePin(GPIOA, LED_2_Pin);
}

void display_clock(){
	if(timer0_flag == 1){
		if(MODE == Mode0){
			display_clock_mode0();
			setTimer0(100);
		}
		if(MODE == Mode1){
			display_clock_mode1();
			setTimer0(100);
		}
		if(MODE == Mode2){
			display_clock_mode2();
			setTimer0(100);
		}
	}
	if(MODE == Mode1 || MODE == Mode2){
		if(INC == BUTTON_PRESSED || MENU == BUTTON_PRESSED || DEC == BUTTON_PRESSED ){
			setTimer1(5000);
		}
	}
	if(timer1_flag == 1){
			MODE = Mode0;
	}
}
