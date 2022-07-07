#include <Arduino.h>
#include "oscillator.h"

AudioPlayQueue audioOut;
AudioOutputI2S i2s1;
AudioConnection patchCord1(audioOut, 0, i2s1, 0);
AudioConnection patchCord2(audioOut, 0, i2s1, 1);
AudioControlSGTL5000 audioControl;

int fsrVal = 0;
float frequency = 440.0;

RFD::Oscillator oscillator = RFD::Oscillator(SQUARE);

void setup() {
	Serial.begin(9600);
	AudioMemory(20);
	audioControl.enable();
	audioControl.volume(0.5);

	audioOut.setMaxBuffers(10);
}

void loop() {
	fsrVal = analogRead(1);
	frequency = ((fsrVal/1023.f) * 1000) + 20 ;

	int16_t* buffer = audioOut.getBuffer();

	for (byte i = 0; i < AUDIO_BLOCK_SAMPLES; i++) {
		buffer[i] = oscillator.getNextSample(frequency);
	}

	audioOut.playBuffer();

}