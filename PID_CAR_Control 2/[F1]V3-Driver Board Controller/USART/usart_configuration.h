/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_CONFIGURATION_H
#define __USART_CONFIGURATION_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

// For PID
#define USART_PID_CHANNEL			USART1
#define BAUDRATE_PID				      	115200
#define USART_PID_CLOCK		      RCC_APB2Periph_USART1
#define STM_PID_TX						          GPIO_Pin_9
#define STM_PID_RX						          GPIO_Pin_10
#define STM_PID_PORT				        GPIOA
#define AF_PID_TX							          GPIO_PinSource9
#define AF_PID_RX							          GPIO_PinSource10
#define AF_PID_CHANNEL				    GPIO_AF_USART1
#define PID_IRQn							            USART1_IRQn

// For JY-901
#define USART_JY901_CHANNEL			USART2
#define BAUDRATE_JY901					     115200
#define USART_JY901_CLOCK		     RCC_APB1Periph_USART2
#define STM_JY901_TX						         GPIO_Pin_2
#define STM_JY901_RX						         GPIO_Pin_3
#define STM_JY901_PORT				         GPIOA
#define AF_JY901_TX							         GPIO_PinSource2
#define AF_JY901_RX							         GPIO_PinSource3
#define AF_JY901_CHANNEL				     GPIO_AF_USART2
#define JY901_IRQn							             USART2_IRQn

// For UWB
#define USART_UWB_CHANNEL			USART3
#define BAUDRATE_UWB					     115200
#define USART_UWB_CLOCK		     RCC_APB1Periph_USART3
#define STM_UWB_TX						         GPIO_Pin_10
#define STM_UWB_RX						         GPIO_Pin_11
#define STM_UWB_PORT				       GPIOB
#define AF_UWB_TX							         GPIO_PinSource10
#define AF_UWB_RX							         GPIO_PinSource11
#define AF_UWB_CHANNEL				   GPIO_AF_USART3
#define UWB_IRQn							           USART3_IRQn
/* Exported functions ------------------------------------------------------- */

#endif /* __USART_CONFIGURATION_H */
