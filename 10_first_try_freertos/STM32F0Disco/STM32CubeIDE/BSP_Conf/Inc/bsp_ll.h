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

#include "stm32f051_discovery.h"

// fix LED def by remap , make consistent
#define		LED5		LED3
#define		LED6		LED4

#define		BUTTON_KEY	BUTTON_USER

#define		MX_USB_HOST_Process()		do{}while(0)
extern const uint16_t BUTTON_PIN[];
extern const uint8_t BUTTON_IRQn[];


#endif /* __BSP_LL_H */
