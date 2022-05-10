/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "reading.h"
#include "processing.h"
#include "display.h"
#include "global.h"
#include "timer.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LR1_Pin GPIO_PIN_1
#define LR1_GPIO_Port GPIOA
#define LY1_Pin GPIO_PIN_2
#define LY1_GPIO_Port GPIOA
#define LG1_Pin GPIO_PIN_3
#define LG1_GPIO_Port GPIOA
#define LR2_Pin GPIO_PIN_4
#define LR2_GPIO_Port GPIOA
#define LY2_Pin GPIO_PIN_5
#define LY2_GPIO_Port GPIOA
#define LG2_Pin GPIO_PIN_6
#define LG2_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_7
#define LED_GPIO_Port GPIOA
#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_1
#define B2_GPIO_Port GPIOB
#define B3_Pin GPIO_PIN_2
#define B3_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_10
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_11
#define EN2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_12
#define EN3_GPIO_Port GPIOB
#define EN4_Pin GPIO_PIN_13
#define EN4_GPIO_Port GPIOB
#define SEG_7_Pin GPIO_PIN_8
#define SEG_7_GPIO_Port GPIOA
#define SEG_8_Pin GPIO_PIN_9
#define SEG_8_GPIO_Port GPIOA
#define SEG_9_Pin GPIO_PIN_10
#define SEG_9_GPIO_Port GPIOA
#define SEG_10_Pin GPIO_PIN_11
#define SEG_10_GPIO_Port GPIOA
#define SEG_11_Pin GPIO_PIN_12
#define SEG_11_GPIO_Port GPIOA
#define SEG_12_Pin GPIO_PIN_13
#define SEG_12_GPIO_Port GPIOA
#define SEG_13_Pin GPIO_PIN_14
#define SEG_13_GPIO_Port GPIOA
#define SEG_0_Pin GPIO_PIN_3
#define SEG_0_GPIO_Port GPIOB
#define SEG_1_Pin GPIO_PIN_4
#define SEG_1_GPIO_Port GPIOB
#define SEG_2_Pin GPIO_PIN_5
#define SEG_2_GPIO_Port GPIOB
#define SEG_3_Pin GPIO_PIN_6
#define SEG_3_GPIO_Port GPIOB
#define SEG_4_Pin GPIO_PIN_7
#define SEG_4_GPIO_Port GPIOB
#define SEG_5_Pin GPIO_PIN_8
#define SEG_5_GPIO_Port GPIOB
#define SEG_6_Pin GPIO_PIN_9
#define SEG_6_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
