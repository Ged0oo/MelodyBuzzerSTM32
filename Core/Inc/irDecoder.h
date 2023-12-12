#ifndef INC_IRDECODER_H_
#define INC_IRDECODER_H_

#include "stm32f1xx_hal.h"
#include <stdint.h>
#include "tim.h"


#define GreenLedPin			GPIO_PIN_7
#define WhiteLedPin			GPIO_PIN_5
#define BlueLedPin			GPIO_PIN_4


#define 	Zero		(0x98)
#define 	One			(0xA2)
#define 	Two			(0x62)
#define 	Three		(0xE2)
#define 	Four		(0x22)
#define 	Five		(0x02)
#define 	Six			(0xC2)
#define 	Seven		(0xE0)
#define 	Eight		(0xA8)
#define 	Nine		(0x90)
#define 	UP			(0x18)
#define 	Down		(0x4A)
#define 	Right		(0x5A)
#define 	Left		(0x10)
#define 	OK			(0x38)
#define 	Astrecs		(0x68)
#define 	Window		(0xb0)

void UpdateLeds();
void ReProgrammingFunction();

#endif /* INC_IRDECODER_H_ */
