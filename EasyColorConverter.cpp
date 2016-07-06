#include "EasyColorConverter.h"

RGBColor EasyColorConverter::hsv2rgb(double hue, double saturation, double value) {
	RGBColor ret;
	double r, g, b;

	int hi = (int)(hue * 6);
	double f = (hue * 6) - hi;
	double p = value * (1 - saturation);
	double q = value * (1 - f * saturation);
	double t = value * (1 - (1 - f) * saturation);

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

	ret.r = ceil(r * 255);
	ret.g = ceil(g * 255);
	ret.b = ceil(b * 255);

	return ret;

}
