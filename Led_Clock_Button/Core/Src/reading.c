/*
 * reading.c
 *
 *  Created on: Nov 6, 2021
 *      Author: DELL
 */
#include "main.h"

#define NO_OF_BUTTONS 				3

static GPIO_PinState buttonBuffer[NO_OF_BUTTONS] = {GPIO_PIN_RESET,GPIO_PIN_RESET,GPIO_PIN_RESET};

static GPIO_PinState debounceButtonBuffer1[NO_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[NO_OF_BUTTONS];

void button_scan(void){
	for(int i=0; i<NO_OF_BUTTONS; i++){
		switch (i){
		case 0:
			debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
			debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin);
			if(debounceButtonBuffer1[i] == debounceButtonBuffer2[i]){
				buttonBuffer[i] = debounceButtonBuffer1[i];
			}

		break;
		case 1:
			debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
			debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(B2_GPIO_Port, B2_Pin);
			if(debounceButtonBuffer1[i] == debounceButtonBuffer2[i]){
				buttonBuffer[i] = debounceButtonBuffer1[i];
			}

		break;
		case 2:
			debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
			debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(B3_GPIO_Port, B3_Pin);
			if(debounceButtonBuffer1[i] == debounceButtonBuffer2[i]){
				buttonBuffer[i] = debounceButtonBuffer1[i];
			}

		break;
		}
	}
}

int is_button_pressed(int index){
	if(index>=NO_OF_BUTTONS) return 0;
	return (buttonBuffer[index] == GPIO_PIN_SET);
}



