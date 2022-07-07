#include "oscillator.h"

RFD::Oscillator::Oscillator(OSCType _oscType) {
	oscType = _oscType;
}

RFD::Oscillator::~Oscillator(){
}

void RFD::Oscillator::setOscType(OSCType _oscType) {
	oscType = _oscType;
}

OSCType RFD::Oscillator::getOscType() {
	return oscType;
}

int16_t RFD::Oscillator::nextSquareSample(float freq) {
	int16_t result = 0;

	if (phase > PI) {
		result = 8000;
	}
	else {
		result = -8000;
	}

	phase += freq/AUDIO_SAMPLE_RATE_EXACT*TWO_PI;
	if (phase >= TWO_PI) {
		phase -= TWO_PI;
	}

	return result;
}

int16_t RFD::Oscillator::getNextSample(float freq) {
	int16_t result = 0;
	switch(oscType) {
		case SQUARE:
			result = nextSquareSample(freq);
	}

	return result;
}