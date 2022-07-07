#ifndef RFD_INPUTHANDLER
#define RFD_INPUTHANDLER

#include <Arduino.h>

namespace RFD {

class FsrHandler {
private:
	int pinNumber;
	int currentVal;
	bool isOn;
	
};

}

#endif