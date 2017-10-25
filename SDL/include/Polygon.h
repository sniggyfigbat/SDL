#pragma once

#include <SFML/Graphics.hpp>
#include "LineStyle.h"
#include "Transform.h"
#include "PointMatrix.h"
#include "DrawObject.h"

using namespace std;
class Polygon : public DrawObject
{
private:
	PointMatrix points;
public:
	Polygon(PointMatrix p, Transform t, LineStyle ls, sf::Color fc, bool v);
	Polygon(PointMatrix p, Transform t);
	Polygon(PointMatrix p);
	Polygon();
	PointMatrix getPoints();
	void setPoints();
};