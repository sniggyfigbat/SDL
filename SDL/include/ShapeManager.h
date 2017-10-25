#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include "Point.h"
#include "LineStyle.h"
#include "DrawObject.h"
#include "Polygon.h"
#include "Arc.h"

using namespace std;
class ShapeManager
{
private:
	vector<Polygon> polygons;
	vector<Arc> arcs;
	vector<DrawObject*> drawables;
public:
	ShapeManager();
	void draw();
	Polygon addLine(Point start, Point end, LineStyle ls, bool visible, Transform t);
	Polygon addTriangle(Point p1, Point p2, Point p3, LineStyle ls, bool visible, Transform t);
	Polygon addRectangle(Point anchor1, Point anchor2, LineStyle ls, bool visible, Transform t);
	void addArc(Arc a);
	void addPolygon(Polygon p);
	vector<Polygon> getPolygonList();
	vector<Arc> getArcList();
};