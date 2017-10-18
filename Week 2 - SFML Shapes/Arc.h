#pragma once

#include <SFML/Graphics.hpp>
#include "LineStyle.h"
#include "Transform.h"
#include "PointMatrix.h"
#include "DrawObject.h"

using namespace std;
class Arc : public DrawObject
{
private:
	float radX;
	float radY;
	float startAngle;
	float endAngle;
public:
	Arc(float x, float y, float startAngle, float endAngle, Transform t, LineStyle ls, sf::Color fc, bool v);
	Arc(float x, float y, float startAngle, float endAngle, Transform t);
	Arc(float x, float y, float startAngle, float endAngle);
	Arc();
	void draw();
	void fill();
	void outline();
	float xRad();
	void xRad(float x);
	float yRad();
	void yRad(float y);
	float angleStart();
	void angleStart(float a);
	float angleEnd();
	void angleEnd(float a);
};