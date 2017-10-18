#pragma once

#include <array>

using namespace std;
class Transform
{
private:
	array<array<float, 3>, 3> value;
public:
	Transform(array<array<float, 3>, 3> t);
	array<array<float, 3>, 3> getTransform();
	void setVal(int x, int y, float v);
	Transform combineTransform(Transform t); // This instance 'happened' first, with the input being added to it.
};