/*
 * processing.c
 *
 *  Created on: Nov 6, 2021
 *      Author: DELL
 */

#include "main.h"
#include "reading.h"
#include "processing.h"
#include "timer.h"
#include "display.h"

enum ButtonState MENU,DEC,INC = BUTTON_RELEASED;


enum Mode MODE = Mode0;

void clock_fsm(void){
	switch(MENU){
	case BUTTON_RELEASED:
		if(is_button_pressed(0)){
			MENU = BUTTON_PRESSED;
			switch(MODE){
			case Mode0:
				MODE = Mode1;
				break;
			case Mode1:
				MODE = Mode2;
				break;
			case Mode2:
				MODE = Mode2;
			}
		}
		break;
	case BUTTON_PRESSED:
		if(!is_button_pressed(0)){
			MENU = BUTTON_RELEASED;
		}
		break;
	}
	switch(INC){
		case BUTTON_RELEASED:
			if(is_button_pressed(1)){
				INC = BUTTON_PRESSED;
				if(MODE == 1){
					hours_current++;
					if(hours_current>=12) hours_current = 0;
				}
				if(MODE == 2){
					minute_current++;
					if(minute_current>=12) {
						minute_current = 0;
					}
				}
			}
			break;
		case BUTTON_PRESSED:
			if(!is_button_pressed(1)){
				INC = BUTTON_RELEASED;
			}
			break;
		}
	switch(DEC){
		case BUTTON_RELEASED:
			if(is_button_pressed(2)){
				DEC = BUTTON_PRESSED;
				if(MODE == 1){
					hours_current--;
					if(hours_current<=0) hours_current = 12;
				}
				if(MODE == 2){
					minute_current--;
					if(minute_current<=0) {
						minute_current = 12;
					}
				}
			}
			break;
		case BUTTON_PRESSED:
			if(!is_button_pressed(2)){
				DEC = BUTTON_RELEASED;
			}
			break;
		}
}
