/*
 * App_Typs.h
 *
 *  Created on: Sep 11, 2022
 *      Author: sreda
 */

#ifndef APP_APP_TYPES_H_
#define APP_APP_TYPES_H_

typedef enum
{
	NORMAL_MODE,
	PEDESTRIANS_MODE
}running_mode_state;

typedef enum
{
	GREEN,
	YELLOW,
	RED
}running_led_state;

typedef enum
 {
 	APP_FAIL,
	APP_SUCCESS
 }appErrorState;

 typedef enum
  {
  	MODE_FAIL,
 	MODE_SUCCESS
  }modeRunningErrorState;

#endif /* APP_APP_TYPES_H_ */
