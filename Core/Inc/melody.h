/*
 * melody.h
 *
 *  Created on: Dec 11, 2023
 *      Author: Mohamed Nagy
 */



#ifndef INC_MELODY_H_
#define INC_MELODY_H_

#include "stm32f1xx_hal.h"
#include <stdint.h>
#include "tim.h"


extern void (*MelodyArray[])(void);

#define BUZZER_PIN GPIO_PIN_6
#define BUZZER_PORT GPIOA


void playNote(uint16_t frequency, uint32_t duration);
void buzz(uint16_t frequency, uint32_t duration);

void playSiren(void);
void playOdeToJoy(void);
void playBirdMelody(void);

void playCountdownMelody(void);
void funnyMelody(void);
void playPianoMelody(void);

void wishTempo(void);
void melodyCriss(void);
void SantaTempo(void);


/*
 * Pitches
 */

#define NOTE_REST 0

// Octave 3
#define NOTE_B3  247

// Octave 4
#define NOTE_C4  261
#define NOTE_D4  293
#define NOTE_E4  329
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  493

// Octave 5
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988

// Octave 6
#define NOTE_C6  1047
#define NOTE_D6  1175
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_G6  1568
#define NOTE_A6  1760
#define NOTE_B6  1976

// Octave 7
#define NOTE_C7  2093
#define NOTE_D7  2349
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_G7  3136
#define NOTE_A7  3520
#define NOTE_B7  3951

// Sharp/Flat notes
#define NOTE_CS4 277
#define NOTE_DF4 277
#define NOTE_DS4 311
#define NOTE_EF4 311
#define NOTE_FS4 370
#define NOTE_GF4 370
#define NOTE_GS4 415
#define NOTE_AF4 415
#define NOTE_AS4 466
#define NOTE_BF4 466
#define NOTE_C5S 554
#define NOTE_DF5 554
#define NOTE_D5S 622
#define NOTE_EF5 622
#define NOTE_FS5 740
#define NOTE_GF5 740
#define NOTE_G5S 831
#define NOTE_AF5 831
#define NOTE_AS5 932
#define NOTE_BF5 932
#define NOTE_C6S 1047
#define NOTE_DF6 1047
#define NOTE_D6S 1175
#define NOTE_EF6 1175
#define NOTE_FS6 1480
#define NOTE_GF6 1480
#define NOTE_G6S 1661
#define NOTE_AF6 1661
#define NOTE_AS6 1865
#define NOTE_BF6 1865
#define NOTE_C7S 2093
#define NOTE_DF7 2093
#define NOTE_D7S 2349
#define NOTE_EF7 2349
#define NOTE_FS7 2960
#define NOTE_GF7 2960
#define NOTE_G7S 3322
#define NOTE_AF7 3322
#define NOTE_AS7 3729
#define NOTE_BF7 3729
#define NOTE_C8S 4186
#define NOTE_DF8 4186





#endif /* INC_MELODY_H_ */
