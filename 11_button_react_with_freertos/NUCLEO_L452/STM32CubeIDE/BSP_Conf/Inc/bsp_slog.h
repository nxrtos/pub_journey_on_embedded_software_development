/**
  ******************************************************************************
  * @file    bsp_slog.h
  * @brief   This file contains head of Board Support config for simple log
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */

#ifndef __BSP_SLOG_H
#define __BSP_SLOG_H

#include "bsp_ll.h"

extern UART_HandleTypeDef huart2;

#define	slog(str)	HAL_UART_Transmit(	\
								&huart2,\
								(uint8_t *)str,\
								sizeof(str),\
								HAL_MAX_DELAY);

#endif /* __BSP_SLOG_H */
