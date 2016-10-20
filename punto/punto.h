#ifndef PUNTO_H
#define PUNTO_H


class punto
{
    public:
        punto(punto &o);
        punto();
        punto(double u, double v):x(u),y(v){}
        int getX();
        int getY();
        void setX(double n);
        void setY(double n);
        void printpoint(punto p);
        void modificar(double u, double v);

        virtual ~punto();
    protected:
    private:
        double x;
        double y;
};

#endif // PUNTO_H|
