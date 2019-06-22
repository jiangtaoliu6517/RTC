/**
  ******************************************************************************
  * @file    RTC/Calendar/main.h 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-May-2012
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"
// #include "stm320518_eval.h"
#include <stdio.h>

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

#define LED1_PIN                         GPIO_Pin_10//GPIO_Pin_10
#define LED1_GPIO_PORT                   GPIOC
#define LED1_GPIO_CLK                    RCC_AHBPeriph_GPIOC
  
#define LED2_PIN                         GPIO_Pin_11//GPIO_Pin_11
#define LED2_GPIO_PORT                   GPIOC
#define LED2_GPIO_CLK                    RCC_AHBPeriph_GPIOC

// #define EVAL_COM1                        USART1
// #define EVAL_COM1_CLK                    RCC_APB2Periph_USART1

// #define EVAL_COM1_TX_PIN                 GPIO_Pin_9
// #define EVAL_COM1_TX_GPIO_PORT           GPIOA
// #define EVAL_COM1_TX_GPIO_CLK            RCC_AHBPeriph_GPIOA
// #define EVAL_COM1_TX_SOURCE              GPIO_PinSource9
// #define EVAL_COM1_TX_AF                  GPIO_AF_1

// #define EVAL_COM1_RX_PIN                 GPIO_Pin_10
// #define EVAL_COM1_RX_GPIO_PORT           GPIOA
// #define EVAL_COM1_RX_GPIO_CLK            RCC_AHBPeriph_GPIOA
// #define EVAL_COM1_RX_SOURCE              GPIO_PinSource10
// #define EVAL_COM1_RX_AF                  GPIO_AF_1
//    
// #define EVAL_COM1_IRQn                   USART1_IRQn

/* Exported functions ------------------------------------------------------- */
void RTC_Config(void);
void RTC_TimeRegulate(void);
void RTC_TimeShow(void);
void RTC_AlarmShow(void);
uint8_t USART_Scanf(uint32_t value);
//加一句话，第二次测试git

#ifdef __GNUC__
  /* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
     set to 'Yes') calls __io_putchar() */
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
