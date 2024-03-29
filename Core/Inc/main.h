/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define RTB_CLK_Pin GPIO_PIN_13
#define RTB_CLK_GPIO_Port GPIOB
#define RTB_DT_Pin GPIO_PIN_14
#define RTB_DT_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_15
#define BUZZER_GPIO_Port GPIOB
#define RLY7_Pin GPIO_PIN_6
#define RLY7_GPIO_Port GPIOC
#define RLY8_Pin GPIO_PIN_7
#define RLY8_GPIO_Port GPIOC
#define RSW_Pin GPIO_PIN_8
#define RSW_GPIO_Port GPIOC
#define RSW_EXTI_IRQn EXTI9_5_IRQn
#define RLY6_Pin GPIO_PIN_9
#define RLY6_GPIO_Port GPIOC
#define RLY1_Pin GPIO_PIN_8
#define RLY1_GPIO_Port GPIOA
#define RLY2_Pin GPIO_PIN_9
#define RLY2_GPIO_Port GPIOA
#define RLY3_Pin GPIO_PIN_10
#define RLY3_GPIO_Port GPIOA
#define RLY4_Pin GPIO_PIN_11
#define RLY4_GPIO_Port GPIOA
#define RLY5_Pin GPIO_PIN_12
#define RLY5_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define CLCD_SCL_Pin GPIO_PIN_6
#define CLCD_SCL_GPIO_Port GPIOB
#define CLCD_SDA_Pin GPIO_PIN_7
#define CLCD_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
