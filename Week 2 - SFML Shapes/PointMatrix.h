#pragma once

#include <vector>
#include <array>
#include "Point.h"
#include "Transform.h"

using namespace std;
class PointMatrix
{
private:
	vector<Point> value;
public:
	PointMatrix();
	void addPoint(Point p);
	Point popPoint(); // Yanks from end
	Point popPoint(int index); // Yanks point at index
	Point getpoint(int index);
	void setVal(int x, int y, float newVal);
	vector<Point> getMatrix();
	PointMatrix transform(Transform t);
	PointMatrix addMatrix(PointMatrix m);
	PointMatrix subtractMatrix(PointMatrix m);
	PointMatrix multiplyMatrix(PointMatrix m);
	//PointMatrix divideMatrix(PointMatrix m); // haaaaaard.
	PointMatrix crossProduct(PointMatrix m);
	PointMatrix dotProduct(PointMatrix m);
};