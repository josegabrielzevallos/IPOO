#include "Pila.h"


template<typename N>
bool Pila<N>::vacio()
{
    if(pilab.empty())
    {
        return true;
    }
    return false;
}

template<typename N>
int Pila<N>::tamano()
{
    return pilab.size();
}

template<typename N>
N Pila<N>::top()
{
    return pilab.back();
}

template<typename N>
void Pila<N>::push(N x)
{
    pilab.push_back(x);
}

template<typename N>
void Pila<N>::pop()
{
    pilab.pop_back();
}

template<typename N>
void Pila<N>::print()
{
    for(int i=0; i < pilab.size(); i++){
		cout << pilab[i] << " ";
	}
	cout << endl;
}

template<typename N>
Pila<N> Pila<N>::operator+(Pila<N> pil)
{
    Pila<N> tmp;
    tmp.pilab = pilab;
    int i = pil.pilab.size() - 1;

    for(i; i>=0; i--)
    {
        N vtmp = pil.pilab[i];
        tmp.pilab.push_back(vtmp);
    }
    return tmp;
}

template class Pila<int>;
