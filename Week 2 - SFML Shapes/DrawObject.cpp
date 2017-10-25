#include "..\SDL\include\DrawObject.h"

DrawObject::DrawObject(Transform t, LineStyle ls, bool v)
{
	transform = t;
	lineStyle = ls;
	visible = v;
}

DrawObject::DrawObject()
{
	transform = Transform();
	lineStyle = LineStyle();
	visible = true;
}

void DrawObject::draw()
{
}

void DrawObject::fill()
{
}

void DrawObject::outline()
{
}

void DrawObject::resetTransform()
{
}

void DrawObject::addTransform(Transform t)
{
}

void DrawObject::setFillColour(sf::Color)
{
}

sf::Color DrawObject::getFillColour()
{
	return sf::Color();
}
