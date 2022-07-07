# RFdesignONE Drum Designer

This project is a hardware drum designer that makes the process of sculpting percussive sounds more tactile and intuitive.

## Hardware

The hardware is comprised of a Teensy 4.0 and its accompanying audio shield, along with peripherals for pressure sensing and adjusting parameters.

## Dependencies

This project is dependent on the Teensy audio library, mainly for the AudioPlayQueue class that allows for signals to be sent directly to an audio shield's buffer.

It's also dependent on the core Arduino library that provides types and utility functions.

This project is built using platformIO, for more information visit https://platformio.org/.

*This is a continuation of my previous USB MIDI Synth project at https://github.com/john-marinelli/midi-synthesizer*