#ifndef RFD_ENVELOPE
#define RFD_ENVELOPE

#include <Arduino.h>

namespace RFD {

class Envelope {
private:
	elapsedMillis envelopeTime;
	float envelopeMarker;
	
};

}

#endif