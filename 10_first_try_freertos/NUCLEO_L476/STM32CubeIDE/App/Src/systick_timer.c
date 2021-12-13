/**
  ******************************************************************************
  * @file    systick_timer.c
  * @brief   This file contains source of systick based softtimer.
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */

#include  "systick_timer.h"

void start_systick_timer(SYSTick_Timer_t * p_timer, uint32_t ticks){
	if(NULL != p_timer) {
		p_timer->start_tick = HAL_GetTick();
		p_timer->end_tick = ticks + p_timer->start_tick;
	}
}

void stop_systick_timer(SYSTick_Timer_t * p_timer){
	if(NULL != p_timer) {
		p_timer->start_tick = p_timer->end_tick;
	}
}
SYSTick_Timer_State_t  get_systick_timer(SYSTick_Timer_t * p_timer){
	if(NULL != p_timer) {
		if(p_timer->start_tick == p_timer->end_tick) {
			return Timer_Stop;
		}
		else {
			uint32_t  current_tick = HAL_GetTick();
			if(p_timer->start_tick < p_timer->end_tick) {
				if(current_tick >= p_timer->start_tick
				 && current_tick < p_timer->end_tick ) {
					return Timer_Running;
				}
				return Timer_Expired;
			}
			else {	// round over
				if(current_tick >= p_timer->start_tick
				 || current_tick < p_timer->end_tick ) {
					return Timer_Running;
				}
				return Timer_Expired;
			}
		}
	}
	return -1;
}
