/*
  EasyColorConverter.h - Color Converter for Arduino.
  Created by Christian Schweichler, 2016
*/

#ifndef EasyColorConverter_h
#define EasyColorConverter_h

#include "Arduino.h"

class EasyColorConverter {
	
	public:	
		void hsv2rgb(float hue, float saturation,float value, float *red, float *green, float *blue);
		void rgb2hsv(float red, float green, float blue, float *hue, float *saturation,float *value);
};



#endif
