#include "../include/PointMatrix.h"

PointMatrix::PointMatrix()
{
}

void PointMatrix::addPoint(Point p)
{
	value.push_back(p);
}

Point PointMatrix::popPoint()
{
	if (value.size) {
		Point popped = value.back();
		value.pop_back();
		return popped;
	}
	else {
		// ERROR HANDLING HERE
	}
}

Point PointMatrix::popPoint(int index)
{
	if (value.size > index && index >= 0) {
		Point popped = value[index];
		value.erase(value.begin+index);
		return popped;
	}
	else {
		// ERROR HANDLING HERE
	}
}

Point PointMatrix::getpoint(int index)
{
	if (value.size > index && index >= 0) {
		return value[index];
	}
	else {
		// ERROR HANDLING HERE
	}
}

void PointMatrix::setVal(int x, int y, float newVal)
{
	value[x].getValue[y] = newVal;
}

vector<Point> PointMatrix::getMatrix()
{
	return value;
}

PointMatrix PointMatrix::transform(Transform t)
{
	return PointMatrix();
}

PointMatrix PointMatrix::addMatrix(PointMatrix m)
{
	return PointMatrix();
}

PointMatrix PointMatrix::subtractMatrix(PointMatrix m)
{
	return PointMatrix();
}

PointMatrix PointMatrix::multiplyMatrix(PointMatrix m)
{
	return PointMatrix();
}

PointMatrix PointMatrix::crossProduct(PointMatrix m)
{
	return PointMatrix();
}

PointMatrix PointMatrix::dotProduct(PointMatrix m)
{
	return PointMatrix();
}
