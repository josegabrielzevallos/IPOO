#include "ArrayPoint.h"


ArrayPoint::ArrayPoint()
{
    tamanho = 0;
    this->aray = new Point[tamanho];
}


ArrayPoint::ArrayPoint(int x)
{
    this->aray = new Point[x];
    tamanho = x;
}

ArrayPoint::ArrayPoint(Point a[], const int x)
{

        this->aray = new Point[x];
        this->tamanho = x;
        for(int i=0; i<tamanho; i++)
            this->aray[i] = a[i];


}

ArrayPoint::ArrayPoint(const ArrayPoint &p)
{
    this->tamanho = p.getSize();

    this->aray = new Point[tamanho];
    for(int i=0; i<tamanho; i++)
            this->aray[i] = p.aray[i];
}


void ArrayPoint::pushback(const Point &p)
{
    ArrayPoint t = ArrayPoint(tamanho);
    for(int i=0; i<tamanho; i++)
        t.aray[i] = this->aray[i];

    delete[] this->aray;
    this->aray = new Point[tamanho+1];

    for(int i=0; i<tamanho; i++)
        this->aray[i] = t.aray[i];
    this->aray[tamanho] = p;
    ++this->tamanho;
}


void ArrayPoint::_insert(const int position, const Point &p)
{

    {
        Point temp = this->aray[position];
        this->aray[position] = p;

        for(int i=1; (i+position)< tamanho; i++)
        {
            Point temp2 = this->aray[position+i];
            this->aray[position+i] = temp;
            temp = temp2;
        }
    }
}



void ArrayPoint::_remove(const int position)
{
    int j;
    for(int i=1,j=0; (i+position)<tamanho; i++,j++)
    {
        Point temp = this->aray[position+i];
        this->aray[position+j] = temp;
    }

    ArrayPoint t = ArrayPoint(tamanho-1);
    for(int i=0; i<tamanho-1; i++)
        t.aray[i] = this->aray[i];
    delete[] this->aray;
    this->aray = new Point[tamanho-1];
    for(int i=0; i<tamanho-1; i++)
        this->aray[i] = t.aray[i];
    --tamanho;
}


void ArrayPoint::print()
{
    int x = this->getSize();
    for (int i = 0 ; i < x ; i++)
    {
       cout << endl<< "arreglodePuntos[" << i <<"]"<<endl;
       aray[i].print();
    }
}



const int ArrayPoint::getSize()const {return tamanho;}

void ArrayPoint::_clear()
{
    delete[] this->aray;
    tamanho = 0;
}


ArrayPoint::~ArrayPoint()
{
    delete[] this->aray;
}

