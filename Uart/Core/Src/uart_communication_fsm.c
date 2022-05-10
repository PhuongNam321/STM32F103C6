/*
 * uart_communication_fsm.c
 *
 *  Created on: Nov 22, 2021
 *      Author: Nguyen Tan Tung
 */

#include "uart_communication_fsm.h"
#include "command_parser_fsm.h"
#include "timer.h"
#include <stdio.h>
enum Phase{WAITING,SENDBACK,CONFIRM};
enum Phase phase = WAITING;
uint32_t ADC_value = 0;
char str[20];

void uart_communication_fsm(){
	switch (phase) {
		case WAITING:
			if(request == 1){
				request = 0;
				ADC_value = HAL_ADC_GetValue(&hadc1);
				phase = SENDBACK;
				setTimer0(3000);
				index_buffer = 0;
			}
			break;
		case SENDBACK:
			HAL_UART_Transmit(&huart2, (void*)str, sprintf(str,"!ADC=%d#\r\n",ADC_value), 1000);
			phase = CONFIRM;
			break;
		case CONFIRM:
			if(response == 1){
				response = 0;
				setTimer0(0);
				phase = WAITING;
				index_buffer = 0;
			}
			if(timer0_flag == 1){
				phase = SENDBACK;
				index_buffer = 0;
				setTimer0(3000);
			}
			break;
	}
}
