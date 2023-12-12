#include "../Inc/melody.h"


void (*MelodyArray[])(void) =
{
		wishTempo, SantaTempo, funnyMelody,
		playPianoMelody, playCountdownMelody, melodyCriss,
		playOdeToJoy, playSiren, playBirdMelody
};




void wishTempo(void)
{
	int wish_melody[] = {
	  NOTE_B3,
	  NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4,
	  NOTE_D4, NOTE_D4, NOTE_D4,
	  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,
	  NOTE_E4, NOTE_E4, NOTE_E4,
	  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4,
	  NOTE_F4, NOTE_D4, NOTE_B3, NOTE_B3,
	  NOTE_D4, NOTE_G4, NOTE_E4,
	  NOTE_F4
	};

	int wish_tempo[] = {
	  4,
	  4, 8, 8, 8, 8,
	  4, 4, 4,
	  4, 8, 8, 8, 8,
	  4, 4, 4,
	  4, 8, 8, 8, 8,
	  4, 4, 8, 8,
	  4, 4, 4,
	  2
	};

	for (int i = 0; i < sizeof(wish_melody) / sizeof(int); i++)
			buzz(wish_melody[i], wish_tempo[i] * 40);

}


void melodyCriss(void)
{
	int melody[] =
	{
	  NOTE_E5, NOTE_E5, NOTE_E5,
	  NOTE_E5, NOTE_E5, NOTE_E5,
	  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
	  NOTE_E5,
	  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
	  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
	  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
	  NOTE_D5, NOTE_G5
	};

	int tempo[] =
	{
	  8, 8, 4,
	  8, 8, 4,
	  8, 8, 8, 8,
	  2,
	  8, 8, 8, 8,
	  8, 8, 8, 16, 16,
	  8, 8, 8, 8,
	  4, 4
	};

	for (int i = 0; i < sizeof(melody) / sizeof(int); i++)
			buzz(melody[i], tempo[i] * 20);  // Adjust tempo multiplier as needed

}


void SantaTempo(void)
{
	int santa_melody[] = {
	  NOTE_G4,
	  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
	  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,
	  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
	  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4,
	  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
	  NOTE_D4, NOTE_F4, NOTE_B3,
	  NOTE_C4
	};

	int santa_tempo[] = {
	  8,
	  8, 8, 4, 4, 4,
	  8, 8, 4, 4, 4,
	  8, 8, 4, 4, 4,
	  8, 8, 4, 2,
	  4, 4, 4, 4,
	  4, 2, 4,
	  1
	};


	for (int i = 0; i < sizeof(santa_melody) / sizeof(int); i++)
		buzz(santa_melody[i], santa_tempo[i] * 40);  // Adjust tempo multiplier as needed
}


void playPianoMelody(void)
{
  // Simple piano melody
  playNote(NOTE_E4, 20);
  playNote(NOTE_D4, 200);
  playNote(NOTE_C4, 200);
  playNote(NOTE_D4, 200);
  playNote(NOTE_E4, 200);
  playNote(NOTE_E4, 200);
  playNote(NOTE_E4, 200);
  playNote(NOTE_REST,200);

  playNote(NOTE_D4, 200);
  playNote(NOTE_D4, 200);
  playNote(NOTE_D4, 200);
  playNote(NOTE_REST,200);

  playNote(NOTE_E4, 200);
  playNote(NOTE_E4, 200);
  playNote(NOTE_E4, 200);
  playNote(NOTE_REST,200);

  // Add more notes or adjust as needed
}


void funnyMelody(void)
{
  int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++)
  {
    playNote(melody[i], 250);
  }

  // Add more notes or adjust as needed
}


void playCountdownMelody(void)
{
  // Countdown Melody
  playNote(NOTE_C4, 400);
  playNote(NOTE_B4, 400);
  playNote(NOTE_A4, 400);
  playNote(NOTE_G4, 400);
  playNote(NOTE_F4, 400);
  playNote(NOTE_E4, 400);
  playNote(NOTE_D4, 400);
  playNote(NOTE_C4, 400);

  // Add more notes or adjust as needed
}


void playBirdMelody(void)
{
  // Bird Melody
  playNote(NOTE_E5, 400);
  playNote(NOTE_D5, 400);
  playNote(NOTE_C5, 400);
  playNote(NOTE_REST, 200);
  playNote(NOTE_E5, 400);
  playNote(NOTE_D5, 400);
  playNote(NOTE_C5, 400);
  playNote(NOTE_REST, 200);
  playNote(NOTE_C5, 400);
  playNote(NOTE_D5, 400);
  playNote(NOTE_E5, 400);
  playNote(NOTE_REST, 200);

  // Add more notes or adjust as needed
}


void playOdeToJoy(void)
{
  // Ode to Joy
  playNote(NOTE_E5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_F5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_F5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_C5, 200);
  playNote(NOTE_C5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_D5, 200);

  playNote(NOTE_E5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_F5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_F5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_C5, 200);
  playNote(NOTE_C5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_D5, 200);

  playNote(NOTE_D5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_E5, 200);
  playNote(NOTE_D5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_G5, 200);
  playNote(NOTE_G5, 200);

  // Add more notes or adjust as needed
}


void playSiren(void)
{
  // Siren pattern: rising pitch followed by falling pitch

  // Rising pitch
  for (uint16_t frequency = 100; frequency <= 1000; frequency += 50)
  {
    playNote(frequency, 50);
  }

  // Falling pitch
  for (uint16_t frequency = 1000; frequency >= 100; frequency -= 50)
  {
    playNote(frequency, 50);
  }
}


void buzz(uint16_t frequency, uint32_t duration)
{
  __HAL_TIM_SET_AUTORELOAD(&htim3, 1000000 / frequency - 1);
  HAL_GPIO_WritePin(BUZZER_PORT, BUZZER_PIN, GPIO_PIN_SET);
  HAL_Delay(duration);
  HAL_GPIO_WritePin(BUZZER_PORT, BUZZER_PIN, GPIO_PIN_RESET);
  HAL_Delay(10); // Adjust this delay as needed
}


void playNote(uint16_t frequency, uint32_t duration)
{
  __HAL_TIM_SET_AUTORELOAD(&htim3, 1000000 / frequency - 1); // Set PWM frequency
  HAL_Delay(duration);
}

