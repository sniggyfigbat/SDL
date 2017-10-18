#pragma once

#include <array>

using namespace std;
class Point
{
private:
	static const int k_iSize = 3;
	array<float, k_iSize> value;
public:
	Point(float x, float y);
	float x();
	void x(float xIn);
	float y();
	void y(float yIn);
	array<float, k_iSize> getValue();
};