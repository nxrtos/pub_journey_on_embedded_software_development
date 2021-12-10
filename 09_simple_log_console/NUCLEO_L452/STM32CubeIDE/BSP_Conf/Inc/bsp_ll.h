/**
  ******************************************************************************
  * @file    bsp_ll.h
  * @brief   This file contains head of Board Support Low Layer Package
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */

#ifndef __BSP_LL_H
#define __BSP_LL_H

#include "stm32l4xx_nucleo.h"

// fix LED def by remap , make consistent
#define		LED3		LED2
#define		LED4		LED2
#define		LED5		LED2
#define		LED6		LED2

#define		MX_USB_HOST_Process()		do{}while(0)

extern GPIO_TypeDef* BUTTON_PORT[];
extern const uint16_t BUTTON_PIN[];
extern const uint8_t BUTTON_IRQn[];

#endif /* __BSP_LL_H */
