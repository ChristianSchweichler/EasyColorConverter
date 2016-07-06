/*
  EasyColorConverter.cpp - Color Converter for Arduino.
  Created by Christian Schweichler, 2016
*/

#include "EasyColorConverter.h"

RGBColor EasyColorConverter::hsv2rgb(float hue, float saturation, float value) {
	RGBColor ret;
	float r, g, b;

	int hi = (int)(hue * 6);
	float f = (hue * 6) - hi;
	float p = value * (1 - saturation);
	float q = value * (1 - f * saturation);
	float t = value * (1 - (1 - f) * saturation);

	switch(hi % 6) {
		case 0:
			r = value;
			g = t;
			b = p;
			break;
		case 1:
			r = q;
			g = value;
			b = p;
			break;
		case 2:
			r = p;
			g = value;
			b = t;
			break;
		case 3:
			r = p;
			g = q;
			b = value;
			break;
		case 4:
			r = t;
			g = p;
			b = value;
			break;
		case 5:
			r = value;
			g = p;
			b = q;
			break;
	}

	ret.r = r;
	ret.g = g;
	ret.b = b;

	return ret;
}

HSVColor EasyColorConverter::rgb2hsv(float r, float g, float b) {
	HSVColor ret;

	//ToDo
	
	ret.r = 0;
	ret.g = 0;
	ret.b = 0;	
	return 
}

