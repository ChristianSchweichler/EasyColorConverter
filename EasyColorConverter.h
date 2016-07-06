/*
  EasyColorConverter.h - Color Converter for Arduino.
  Created by Christian Schweichler, 2016
*/

#ifndef EasyColorConverter_h
#define EasyColorConverter_h

#include "Arduino.h"

struct RGBColor;
struct HSVColor;

struct RGBColor{
			float r;
			float g;
			float b;
		};

struct HSVColor{
			float hue;
			float saturation;
			float value;		
		};

class EasyColorConverter {
	
	public:	
		RGBColor hsv2rgb(float hue, float saturation,float value);
		HSVColor rgb2hsv(float r, float g, float b);
};



#endif
