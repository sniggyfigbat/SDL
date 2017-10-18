#pragma once

#include <SFML/Graphics.hpp>
#include "LineStyle.h"
#include "Transform.h"

using namespace std;
class DrawObject
{
protected:
	Transform transform;
	LineStyle lineStyle;
	bool visible;
	sf::Color fillColour;
public:
	DrawObject(Transform t, LineStyle ls, bool v);
	DrawObject();
	void draw();
	void fill();
	void outline();
	void resetTransform();
	void addTransform(Transform t);
	void setFillColour(sf::Color);
	sf::Color getFillColour();
};