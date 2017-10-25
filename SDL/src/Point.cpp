#include "../include/Point.h"

Point::Point(float x, float y)
{
	value[0] = x;
	value[1] = y;
	value[2] = 1;
}

float Point::x()
{
	return value[0];
}

void Point::x(float xIn)
{
	value[0] = xIn;
}

float Point::y()
{
	return value[1];
}

void Point::y(float yIn)
{
	value[1] = yIn;
}

array<float, 3> Point::getValue()
{
	return value;
}
