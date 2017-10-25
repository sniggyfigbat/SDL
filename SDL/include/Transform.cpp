#include "Transform.h"

Transform::Transform()
{
}

Transform::Transform(array<array<float, 3>, 3> t)
{
}

array<array<float, 3>, 3> Transform::getTransform()
{
	return array<array<float, 3>, 3>();
}

void Transform::setVal(int x, int y, float v)
{
}

Transform Transform::combineTransform(Transform t)
{
	return Transform();
}
