/*
 * display.c
 *
 *  Created on: Oct 18, 2021
 *      Author: DELL
 */

#include "main.h"

void clearAll(){
	HAL_GPIO_WritePin(GPIOA,LR1_Pin|LR2_Pin|LY1_Pin|LY2_Pin|LG1_Pin|LG2_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin,GPIO_PIN_SET);

}

void display7SEG(int num){
	switch (num){
		case 0:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_6_Pin ,GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, SEG_1_Pin|SEG_2_Pin ,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_3_Pin|SEG_4_Pin|SEG_6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_2_Pin|SEG_5_Pin ,GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_4_Pin|SEG_5_Pin ,GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_3_Pin|SEG_4_Pin ,GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, SEG_1_Pin|SEG_2_Pin|SEG_5_Pin|SEG_6_Pin ,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_2_Pin|SEG_3_Pin|SEG_5_Pin|SEG_6_Pin ,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_1_Pin|SEG_4_Pin ,GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_2_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin ,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_1_Pin ,GPIO_PIN_SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin ,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin ,GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_4_Pin|SEG_5_Pin|SEG_6_Pin ,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_5_Pin|SEG_6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_4_Pin ,GPIO_PIN_SET);
				break;
		default:
			HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_5_Pin|SEG_6_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, SEG_4_Pin ,GPIO_PIN_SET);
		}
}

void display7SEG1(int num){
	switch (num){
		case 0:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin|SEG_11_Pin|SEG_12_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_13_Pin ,GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin,GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG_8_Pin|SEG_9_Pin ,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_10_Pin|SEG_11_Pin|SEG_13_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_9_Pin|SEG_12_Pin ,GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin|SEG_13_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_11_Pin|SEG_12_Pin ,GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_10_Pin|SEG_11_Pin ,GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG_8_Pin|SEG_9_Pin|SEG_12_Pin|SEG_13_Pin ,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_9_Pin|SEG_10_Pin|SEG_12_Pin|SEG_13_Pin ,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_8_Pin|SEG_11_Pin ,GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_9_Pin|SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin ,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_8_Pin ,GPIO_PIN_SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin ,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin ,GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin ,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin|SEG_12_Pin|SEG_13_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_11_Pin ,GPIO_PIN_SET);
			break;
		default:
			HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin|SEG_12_Pin|SEG_13_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG_11_Pin ,GPIO_PIN_SET);
		}
}

int led_buffer_traffic1[2] = {1,2};
int led_buffer_traffic2[2] = {1,2};

void updateTrafficBuffer(int number, int number1){
	if(number<10){
		led_buffer_traffic1[0] = 0;
		led_buffer_traffic1[1] = number;
	}
	else{
		led_buffer_traffic1[0] = (int)number/10;
		led_buffer_traffic1[1] = number - led_buffer_traffic1[0]*10;
	}

	if(number1<10){
		led_buffer_traffic2[0] = 0;
		led_buffer_traffic2[1] = number1;
	}
	else{
		led_buffer_traffic2[0] = (int)number1/10;
		led_buffer_traffic2[1] = number1 - led_buffer_traffic2[0]*10;
	}
}

const int MAX_LED = 2;
int index_led1 = 0;
int index_led2 = 0;
void update7SEG1(int index1){
	switch(index1){
	case 0:
		HAL_GPIO_WritePin(GPIOB, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, EN2_Pin, GPIO_PIN_SET);
		display7SEG(led_buffer_traffic1[index1]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, EN2_Pin, GPIO_PIN_RESET);
		display7SEG(led_buffer_traffic1[index1]);
		break;
	}
}

void update7SEG2(int index2){
	switch(index2){
	case 0:
		HAL_GPIO_WritePin(GPIOB, EN3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, EN4_Pin, GPIO_PIN_SET);
		display7SEG1(led_buffer_traffic2[index2]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, EN3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, EN4_Pin, GPIO_PIN_RESET);
		display7SEG1(led_buffer_traffic2[index2]);
		break;
	}
}

void display_Traffic_mode1(){
	switch(status_Traffic){
	case statusRed1:
		HAL_GPIO_WritePin(GPIOA,LR1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LY1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LG1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LR2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LY2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LG2_Pin,GPIO_PIN_RESET);
		updateTrafficBuffer(time_Red_update, time_Green_update);
		if(timer1_flag == 1){
			update7SEG1(index_led1++);
			update7SEG2(index_led2++);
			++counter;
			if(counter==2){
				time_Red_update--;
				time_Green_update--;
				counter=0;
			}
			if(index_led1>=MAX_LED || index_led2>=MAX_LED){
				index_led1=0;
				index_led2=0;
			}
			setTimer1(250);
		}
		if(time_Green_update <= 0) {
			status_Traffic = statusYellow1;
			counter=0;
		}
		break;
	case statusYellow1:
		HAL_GPIO_WritePin(GPIOA,LR1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LY1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LG1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LR2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LY2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LG2_Pin,GPIO_PIN_SET);
		updateTrafficBuffer(time_Red_update, time_Yellow_update);
		if(timer1_flag == 1){
			update7SEG1(index_led1++);
			update7SEG2(index_led2++);
			++counter;
			if(counter==2){
				time_Red_update--;
				time_Yellow_update--;
				counter=0;
			}
			if(index_led1>=MAX_LED || index_led2>=MAX_LED){
				index_led1=0;
				index_led2=0;
			}
			setTimer1(250);
		}
		if(time_Red_update <= 0){
			status_Traffic = statusGreen1;
			counter=0;
		}
		break;
	case statusGreen1:
		HAL_GPIO_WritePin(GPIOA,LR1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LY1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LG1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LR2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LY2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LG2_Pin,GPIO_PIN_SET);
		updateTrafficBuffer(time_Green_update, time_Red_update);
		if(timer1_flag == 1){
			update7SEG1(index_led1++);
			update7SEG2(index_led2++);
			++counter;
			if(counter == 2){
				time_Red_update--;
				time_Green_update--;
				counter = 0;
			}
			if(index_led1>=MAX_LED || index_led2>=MAX_LED){
				index_led1=0;
				index_led2=0;
			}
			setTimer1(250);
		}
		if(time_Green_update <= 0){
			status_Traffic = statusRed2;
			counter = 0;
		}
		break;
	case statusRed2:
		HAL_GPIO_WritePin(GPIOA,LR1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LY1_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LG1_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LR2_Pin,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,LY2_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,LG2_Pin,GPIO_PIN_SET);
		updateTrafficBuffer(time_Yellow_update, time_Red_update);
		if(timer1_flag == 1){
			update7SEG1(index_led1++);
			update7SEG2(index_led2++);
			++counter;
			if(counter == 2){
				time_Red_update--;
				time_Yellow_update--;
				counter = 0;
			}
			if(index_led1>=MAX_LED || index_led2>=MAX_LED){
				index_led1=0;
				index_led2=0;
			}
			setTimer1(250);
		}
		if(time_Red_update <= 0){
			status_Traffic = statusRed1;
			counter = 0;
		}
		break;
	}
	counter_Red_update = time_Red_update;
	counter_Yellow_update = time_Yellow_update;
	counter_Green_update = time_Green_update;
	if(time_Red_update<=0) time_Red_update = counter_Red_update;
	if(time_Green_update<=0) time_Green_update = counter_Green_update;
	if(time_Yellow_update<=0) time_Yellow_update = counter_Yellow_update;
}

int status_binking_red=0;
void display_Traffic_mode2(){
	if(timer2_flag == 1){
		switch(status_binking_red){
		case 0:
			HAL_GPIO_WritePin(GPIOA, LR1_Pin|LR2_Pin, GPIO_PIN_SET);
			status_binking_red=1;
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, LR1_Pin|LR2_Pin, GPIO_PIN_RESET);
			status_binking_red=0;
			break;
		}
		HAL_GPIO_WritePin(GPIOA, LY1_Pin|LY2_Pin|LG1_Pin|LG2_Pin, GPIO_PIN_SET);
		setTimer2(500);
	}
	time_Red_current = counter_Red_update;
	updateTrafficBuffer(time_Red_current,2);
	if(timer1_flag == 1){
		update7SEG1(index_led1++);
		update7SEG2(index_led2++);
		if(index_led1>=MAX_LED || index_led2>=MAX_LED){
			index_led1=0;
			index_led2=0;
		}
		setTimer1(250);
	}
}

int status_binking_green=0;
void display_Traffic_mode3(){
	if(timer2_flag == 1){
		switch(status_binking_green){
		case 0:
			HAL_GPIO_WritePin(GPIOA, LY1_Pin|LY2_Pin, GPIO_PIN_SET);
			status_binking_green=1;
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, LY1_Pin|LY2_Pin, GPIO_PIN_RESET);
			status_binking_green=0;
			break;
		}
		HAL_GPIO_WritePin(GPIOA, LR1_Pin|LR2_Pin|LG1_Pin|LG2_Pin, GPIO_PIN_SET);
		setTimer2(500);
	}
	time_Yellow_current = counter_Yellow_update;
	updateTrafficBuffer(time_Yellow_current,3);
	if(timer1_flag == 1){
		update7SEG1(index_led1++);
		update7SEG2(index_led2++);
		if(index_led1>=MAX_LED || index_led2>=MAX_LED){
			index_led1=0;
			index_led2=0;
		}
		setTimer1(250);
	}
}

int status_binking_yellow=0;
void display_Traffic_mode4(){
	if(timer2_flag == 1){
		switch(status_binking_yellow){
		case 0:
			HAL_GPIO_WritePin(GPIOA, LG1_Pin|LG2_Pin, GPIO_PIN_SET);
			status_binking_yellow=1;
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, LG1_Pin|LG2_Pin, GPIO_PIN_RESET);
			status_binking_yellow=0;
			break;
		}
		HAL_GPIO_WritePin(GPIOA, LR1_Pin|LR2_Pin|LY1_Pin|LY2_Pin, GPIO_PIN_SET);
		setTimer2(500);
	}
	time_Green_current = counter_Green_update;
	updateTrafficBuffer(time_Green_current,4);
	if(timer1_flag == 1){
		update7SEG1(index_led1++);
		update7SEG2(index_led2++);
		if(index_led1>=MAX_LED || index_led2>=MAX_LED){
			index_led1=0;
			index_led2=0;
		}
		setTimer1(250);
	}
}

void display_Traffic(void){
	if(Mode == MODE1){
		display_Traffic_mode1();
	}
	if(Mode == MODE2){
		display_Traffic_mode2();
	}
	if(Mode == MODE3){
		display_Traffic_mode3();
	}
	if(Mode == MODE4){
		display_Traffic_mode4();
	}
}



