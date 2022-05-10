/*
 * command_parser_fsm.h
 *
 *  Created on: Nov 22, 2021
 *      Author: Nguyen Tan Tung
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#include "main.h"
#define MAX_BUFFER_SIZE 30
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern int request,response;
void command_parser_fsm();
int extractCommand();

#endif /* INC_COMMAND_PARSER_FSM_H_ */
