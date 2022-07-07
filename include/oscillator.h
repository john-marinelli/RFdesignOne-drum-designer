#ifndef RFD_OSCILLATOR
#define RFD_OSCILLATOR

#include <Arduino.h>
#include <Audio.h>
#include "RFDtypes.h"


namespace RFD {

class Oscillator {
private:
	OSCType oscType;
	float phase = 0.f;

	int16_t nextSquareSample(float freq);

public:
	Oscillator(OSCType _oscType);
	~Oscillator();
	
	int16_t getNextSample(float freq);
	void setOscType(OSCType _oscType);
	OSCType getOscType();

};

}

#endif
