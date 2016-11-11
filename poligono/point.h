#include <iostream>
using namespace std;

class Point{
	
private:
	
	double x, y;
	
public:
	
	Point(){
		
		x = 0.0;
		y = 0.0;
		
	}
	
	Point (Point &o){
		
		x = o.x;
		y = o.y;
		
	}
	
	Point (double nx, double ny){
		
		x = nx;
		y = ny;
		
	}
	
	double getX() const;
	
	double getY() const;
	
	void setX(double nx);
	
	void setY(double ny);
	
	void printPoint();
	
	void modifyPoint(double nx, double ny);
	
};


class PointArray{
	
private:
	
	int size;
	Point *points;
	
public:
	
	PointArray(){
		
		size = 0;
		points = new Point[0];
		
	}
	
	PointArray (const Point ptsToCopy[], const int toCopySize){
		
		size = toCopySize ;
		points = new Point [ toCopySize ];
		for(int i = 0; i < toCopySize ; ++i)
			points [i] = ptsToCopy [i];
			
	}
	
	
	PointArray(const PointArray &pv){
		
		size = pv.size;
		points = new Point[size];
		for(int i = 0; i < size; i++)
			points[i] = pv.points[i];
			
	}
	
	void resize(int newSize);
	
	int getSize() const;
	
	void clear();
	
	void push_back(const Point &p);
	
	void insert(const int pos, const Point &p);
	
	void remove(const int pos);
	
	Point *get(const int pos);
	
	const Point *get(const int pos) const;
	
	void printArr();
	
};
