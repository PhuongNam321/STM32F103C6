/*
 * processing.c
 *
 *  Created on: Oct 18, 2021
 *      Author: DELL
 */

#include "main.h"
#include "processing.h"
#include "reading.h"
#include "display.h"

enum ButtonState{BUTTON_RELEASED,BUTTON_PRESSED,BUTTON_PRESSED_MORE_THAN_1_SECOND};
enum ButtonState buttonState = BUTTON_RELEASED;
enum ButtonState buttonState1 = BUTTON_RELEASED;
enum ButtonState buttonState2 = BUTTON_RELEASED;

int a;
#define DUARATION_AUTO_IRC 		50
#define NO_OF_BUTTONS 			3
static uint16_t counterForButtonPress1s[NO_OF_BUTTONS];

void fsm_for_input_processing(void){
	switch(buttonState){
	case BUTTON_RELEASED:
		if(is_button_pressed(0)){
			buttonState = BUTTON_PRESSED;
			switch(Mode){
			case INIT:
				Mode = MODE1;
				break;
			case MODE1:
				Mode = MODE2;
				break;
			case MODE2:
				Mode = MODE3;
				break;
			case MODE3:
				Mode = MODE4;
				break;
			case MODE4:
				Mode = MODE1;
				break;
			}
		}
		break;
	case BUTTON_PRESSED:
		if(!is_button_pressed(0)){
			buttonState = BUTTON_RELEASED;
		}
		else{
			if(is_button_pressed_1s(0)){
				buttonState = BUTTON_PRESSED_MORE_THAN_1_SECOND;
			}
		}
		break;
	case BUTTON_PRESSED_MORE_THAN_1_SECOND:
		if(!is_button_pressed_1s(0)){
			buttonState = BUTTON_RELEASED;
		}
		break;
	}
	switch(buttonState1){
		case BUTTON_RELEASED:
			if(is_button_pressed(1)){
				buttonState1 = BUTTON_PRESSED;
				if(Mode == MODE2){
					counter_Red_update++;
					if(counter_Red_update>=99) counter_Red_update = 1;
				}
				if(Mode == MODE3){
					counter_Yellow_update++;
					if(counter_Yellow_update>=99) counter_Yellow_update = 1;
				}
				if(Mode == MODE4){
					counter_Green_update++;
					if(counter_Green_update>=99) counter_Green_update = 1;
				}
			}
			break;
		case BUTTON_PRESSED:
			if(!is_button_pressed(1)){
				buttonState1 = BUTTON_RELEASED;
			}
			else{
				if(is_button_pressed_1s(1)){
					buttonState1 = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				}
			}
			break;
		case BUTTON_PRESSED_MORE_THAN_1_SECOND:
			if(!is_button_pressed_1s(1)){
				buttonState1 = BUTTON_RELEASED;
				counterForButtonPress1s[1] = 0;
			}
			counterForButtonPress1s[1]++;
			if(counterForButtonPress1s[1] >= DUARATION_AUTO_IRC){
				if(Mode == MODE2){
					counter_Red_update++;
					if(counter_Red_update>=99) counter_Red_update = 1;
				}
				if(Mode == MODE3){
					counter_Yellow_update++;
					if(counter_Yellow_update>=99) counter_Yellow_update = 1;
				}
				if(Mode == MODE4){
					counter_Green_update++;
					if(counter_Green_update>=99) counter_Green_update = 1;
				}
				counterForButtonPress1s[1] = 0;
			}
			break;
		}
	switch(buttonState2){
		case BUTTON_RELEASED:
			if(is_button_pressed(2)){
				buttonState2 = BUTTON_PRESSED;
				if(Mode == MODE2){
					time_Red_current = counter_Red_update;
					time_Red_update = counter_Red_update;
				}
				if(Mode == MODE3){
					time_Yellow_current = counter_Yellow_update;
					time_Yellow_update = counter_Yellow_update;
				}
				if(Mode == MODE4){
					time_Green_current = counter_Green_update;
					time_Green_update = counter_Green_update;
				}
			}
			break;
		case BUTTON_PRESSED:
			if(!is_button_pressed(2)){
				buttonState2 = BUTTON_RELEASED;
			}
			else{
				if(is_button_pressed_1s(2)){
					buttonState2 = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				}
			}
			break;
		case BUTTON_PRESSED_MORE_THAN_1_SECOND:
			if(!is_button_pressed_1s(2)){
				buttonState2 = BUTTON_RELEASED;
			}
			break;
		}
}
