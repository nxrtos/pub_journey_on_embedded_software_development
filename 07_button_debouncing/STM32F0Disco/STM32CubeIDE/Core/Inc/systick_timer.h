/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    systick_timer.h
  * @brief   This file contains the headers of systick based softtimer.
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SYSTICK_TIMER_H
#define __SYSTICK_TIMER_H

#include "stm32f0xx_hal.h"

#ifdef __cplusplus
 extern "C" {
#endif
// uint32_t HAL_GetTick(void);
typedef  struct  _systick_based_timer {
	uint32_t	start_tick ;
	uint32_t	end_tick ;
} SYSTick_Timer_t;

typedef  enum _systick_timer_status_ {
	Timer_Running,
	Timer_Expired,
	Timer_Stop
}SYSTick_Timer_State_t;

void start_systick_timer(SYSTick_Timer_t * p, uint32_t ticks);
void stop_systick_timer(SYSTick_Timer_t * p);
SYSTick_Timer_State_t  get_systick_timer(SYSTick_Timer_t * p);

#ifdef __cplusplus
}
#endif

#endif /* __SYSTICK_TIMER_H */
