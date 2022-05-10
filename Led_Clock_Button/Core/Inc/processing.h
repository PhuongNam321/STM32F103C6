/*
 * processing.h
 *
 *  Created on: Nov 6, 2021
 *      Author: DELL
 */

#ifndef INC_PROCESSING_H_
#define INC_PROCESSING_H_

enum ButtonState{BUTTON_RELEASED,BUTTON_PRESSED};
enum ButtonState MENU;
enum ButtonState INC;
enum ButtonState DEC;
enum Mode{Mode0,Mode1,Mode2};
enum Mode MODE;
void clock_fsm(void);

#endif /* INC_PROCESSING_H_ */
