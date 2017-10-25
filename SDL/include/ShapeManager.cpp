#include "ShapeManager.h"

ShapeManager::ShapeManager()
{
}

void ShapeManager::draw()
{
}

Polygon ShapeManager::addLine(Point start, Point end, LineStyle ls, bool visible, Transform t)
{
	return Polygon();
}

Polygon ShapeManager::addTriangle(Point p1, Point p2, Point p3, LineStyle ls, bool visible, Transform t)
{
	return Polygon();
}

Polygon ShapeManager::addRectangle(Point anchor1, Point anchor2, LineStyle ls, bool visible, Transform t)
{
	return Polygon();
}

void ShapeManager::addArc(Arc a)
{
}

void ShapeManager::addPolygon(Polygon p)
{
}

vector<Polygon> ShapeManager::getPolygonList()
{
	return polygons;
}

vector<Arc> ShapeManager::getArcList()
{
	return arcs;
}
