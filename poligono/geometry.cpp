#include "geometry.h"

int Polygon::numPolygons = 0;

Polygon::Polygon(const PointArray &pa) : points(pa){
	
	++numPolygons;
	
}

Polygon::Polygon(const Point pointArr[], const int numPoints) : points(pointArr, numPoints){
	
	++numPolygons;
	
}

//Rectangle
Point constructorRPoints[4];

Point *updateConstructorRPoints(const Point &p1, const Point &p2,
							    const Point &p3, const Point &p4){
	constructorRPoints[0] = p1;
	constructorRPoints[1] = p2;
	constructorRPoints[2] = p3;
	constructorRPoints[3] = p4;
	return constructorRPoints;
}

Rectangle::Rectangle(const Point &p1, const Point &p2) 
	: Polygon(updateConstructorRPoints(p1, Point(p1.getX(), p2.getY()),
									  p2, Point(p2.getX(), p1.getY()) ), 4) {}

Rectangle::Rectangle(const int p1x, const int p1y,
					 const int p2x, const int p2y)
	: Polygon(updateConstructorRPoints(Point(p1x, p1y), Point(p1x, p2y),
									  Point(p2x, p2y), Point(p2x, p1y) ), 4) {}

double Rectangle::area() const{
	
		
	int length = points.get(1) -> getY() - points.get(0) -> getY();
	int width  = points.get(2) -> getX() - points.get(1)  -> getX();
	
	return abs((double)width * length);
}

//Triangle
Point constructorTPoints[3];

Point *updateConstructorTPoints(const Point &p1, const Point &p2,
								const Point &p3){
	constructorTPoints[0] = p1;
	constructorTPoints[1] = p2;
	constructorTPoints[2] = p3;
	return constructorTPoints;
}

Triangle::Triangle(const Point &a, const Point &b, const Point &c)
		: Polygon(updateConstructorTPoints(a, b, c), 3) {}
				   
double Triangle::area() const{
	
	int ax01 = points.get(0) -> getX() - points.get(1) -> getX();
	int	ax12 = points.get(1) -> getX() - points.get(2) -> getX();
	int	ax20 = points.get(2) -> getX() - points.get(0) -> getX();
	int ay01 = points.get(0) -> getY() - points.get(1) -> getY();
	int	ay12 = points.get(1) -> getY() - points.get(2) -> getY();
	int	ay20 = points.get(2) -> getY() - points.get(0) -> getY();
	
	double a = sqrt(ax01*ax01 + ay01*ay01);
	double b = sqrt(ax12*ax12 + ay12*ay12);
	double c = sqrt(ax20*ax20 + ay20*ay20);
					
	double s = (a + b + c)/2;
	
	return sqrt(s * (s - a) * (s - b) * (s - c));
	
}
