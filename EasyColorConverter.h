/*
  EasyColorConverter.h - Color Converter for Arduino.
  Created by Christian Schweichler, 2016
*/

#ifndef EasyColorConverter_h
#define EasyColorConverter_h

#include "Arduino.h"

struct RGBColor;

struct RGBColor{
			uint8_t r;
			uint8_t g;
			uint8_t b;
		};

class EasyColorConverter {
	
	public:	
		RGBColor hsv2rgb(double hue, double saturation, double value);
};



#endif
