#pragma once

#include <array>

using namespace std;
class Point
{
private:
	array<float, 3> value;
public:
	Point(float x, float y);
	float x();
	void x(float xIn);
	float y();
	void y(float yIn);
	array<float, 3> getValue();
};