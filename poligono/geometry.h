#include <stdlib.h>
#include <math.h>
#include "vector.cpp"


class Polygon{
	
protected:
	
	static int numPolygons;	
	PointArray points;

public:
	
	Polygon(const PointArray &pa);
	Polygon(const Point points[], const int numPoints);
	virtual double area() const = 0;
	int getNumPolygons() const {return numPolygons;}
	int getNumSides() const {return points.getSize();}
	const PointArray *getPoints() const {return &points;}
	~Polygon() {--numPolygons;}
	
};

class Rectangle : public Polygon{
	
public:
	
	Rectangle(const Point &a, const Point &b);
	Rectangle(const int a, const int b, const int c, const int d);
	virtual double area() const;
	
};

class Triangle : public Polygon{
	
public:
	Triangle(const Point &a, const Point &b, const Point &c);
	virtual double area() const;
	
};
