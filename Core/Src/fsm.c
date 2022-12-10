/*
 * fsm.c
 *
 *  Created on: Nov 30, 2022
 *      Author: PC
 */


#include "fsm.h"

int tim = 0;
void demoBuzzer()
{
	switch(tim){
	case 0:
		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 10);
		if(timer_flag[0] == 1)
		{
			tim++;
			setTimer(100, 0);
		}
		break;
	case 1:
		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 50);
		if(timer_flag[0] == 1)
		{
			tim++;
			setTimer(100, 0);
		}
		break;
	case 2:
		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 100);
		if(timer_flag[0] == 1)
		{
			tim = 0;
			setTimer(100, 0);
		}
		break;
	}

}
