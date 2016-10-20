#include "punto.h"

punto::punto()
{
    x = 0;
    y = 0;
}
punto::punto(punto &o)
{
    y=o.y;
    x=o.x;
}
double punto::getX(){return x;}
double punto::getY(){return y;}
void punto::setX(double n){n=x;}
void punto::setY(double n){n=y;}
void punto::printpoint(point p)
{
    cout<<p<<endl;
}
void punto::modificar(double u,double v)
{
    x=u;
    x=v;
}

punto::~punto()
{
    //dtor
}
