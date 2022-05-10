/*
 * command_parser_fsm.c
 *
 *  Created on: Nov 22, 2021
 *      Author: Nguyen Tan Tung
 */
#include "command_parser_fsm.h"
#include "uart_communication_fsm.h"
#include <string.h>
uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
int request,response = 0;
enum waitingCommand {WAITFirst,WAITLast};
enum waitingCommand status = WAITFirst;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	//TODO HERE
	if(huart->Instance == USART2){
		buffer[index_buffer++] = temp;
		if(index_buffer == 30) index_buffer = 0;
		buffer_flag = 1;
		HAL_UART_Transmit(&huart2, &temp, 1, 50);
		HAL_UART_Receive_IT(&huart2, &temp, 1);
	}

}


int extractCommand(){
	char extract[30];
	int i=0,j=0,k=0;
	buffer[29] = '\0';
	for(i=0;i<30;i++){
		if(buffer[i] == '!'){
			j =i+1;
			while(buffer[j]!='#'){
				if(buffer[j] == '\0'){
					break;
				}
				extract[k] = buffer[j];
				k++;
				j++;
			}
		}
	}
	extract[k] = '\0';
	if(strcmp(extract,"RTS") == 0) return 1;
	else if(strcmp(extract,"OK") == 0) return 2;
	else return 0;
}
void command_parser_fsm() {
	switch (status) {
		case WAITFirst:
			if(buffer[index_buffer-1] == '!'){
				index_buffer = 1;
				buffer[0] = '!';
				status = WAITLast;
			}
			break;
		case WAITLast:
			if(buffer[index_buffer-1] == '!'){
				index_buffer = 1;
				buffer[0] = '!';
				status = WAITLast;
			}
			else {
				if(buffer[index_buffer-1] == '#'){
					if(extractCommand() == 1) {
						request = 1;
						status = WAITFirst;
					}
					else if(extractCommand() == 2) {
						response = 1;
						status = WAITFirst;
					}
					else {
						status = WAITFirst;
					}
				}
			}
			break;
	}
}
