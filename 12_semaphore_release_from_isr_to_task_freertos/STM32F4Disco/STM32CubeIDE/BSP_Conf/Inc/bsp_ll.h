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

#include "stm32f4_discovery.h"
#include "usb_host.h"

extern GPIO_TypeDef* BUTTON_PORT[];
extern const uint16_t BUTTON_PIN[];
extern const uint8_t BUTTON_IRQn[];

#endif /* __BSP_LL_H */
