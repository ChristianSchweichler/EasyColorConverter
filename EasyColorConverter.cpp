/*
  EasyColorConverter.cpp - Color Converter for Arduino.
  Created by Christian Schweichler, 2016
*/

#include "EasyColorConverter.h"

void EasyColorConverter::hsv2rgb(float hue, float saturation,float value, float *red, float *green, float *blue) {

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

	*red = r;
	*green = g;
	*blue = b;
}

void EasyColorConverter::rgb2hsv(float red, float green, float blue, float *hue, float *saturation,float *value) {
		
	float h, s, v;
	float max_ = max(max(red, green), blue);
	float min_ = min(min(red, green), blue);
	float delta = (max_ - min_);

	if (max_ == min_)  {
		h = 0;
	} else {
		if (max_ == red)  {
			h = (green - blue) / delta;
		} else if (max_ == green) {
			h = 2 + (blue - red) / delta;
		} else if (max_ == blue) {
			h = 4 + (red -green) / delta;		
		}
			
			h = h / 6.0;
			if (h < 0) {
				h = h + 1.0;
			}
			
	}
	 
	if (max_ == 0) {
		s = 0;
	} else {
		s = delta / max_;
	}

	v = max_;

	*hue = h;
	*saturation = s;
	*value = v;	

}

