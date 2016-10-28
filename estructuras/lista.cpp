#include <iostream>
#include "Lista.h"



template<typename N>
typename vector<N>::iterator Lista<N>::begin()
{
    return listab.begin();
}

template<typename N>
typename vector<N>::iterator Lista<N>::end()
{
    return listab.end();
}

template<typename N>
bool Lista<N>::vacia()
{
    if (listab.empty()){
        return true;
    }
    return false;
}

template<typename N>
int Lista<N>::tamano()
{
    return listab.size();
}

template<typename N>
void Lista<N>::insertar(int pos, N x)
{
    listab.insert(listab.begin() + pos, x );
}

template<typename N>
void Lista<N>::borrar(int pos)
{
    listab.erase(listab.begin() + pos);
}

template<typename N>
void Lista<N>::pushfront(N x)
{
    listab.insert(listab.begin(), x);
}

template<typename N>
void Lista<N>::pushback(N x)
{
    listab.insert(listab.end(), x);
}

template<typename N>
void Lista<N>::popfront()
{
    listab.erase(listab.begin());
}

template<typename N>
void Lista<N>::popback()
{
    listab.erase(listab.end());
}

template<typename N>
void Lista<N>::print()
{
    for(int i = 0 ; i < listab.size(); i++)
    {
        cout<<listab[i]<<" " ;
    }
    cout<<endl;
}

template<typename N>
Lista<N> Lista<N>::operator+ (Lista<N> l)
{
    Lista<N> tmp;
    tmp.listab.insert(tmp.begin(), listab.begin(), listab.end());
    tmp.listab.insert(tmp.end(),l.listab.begin(), l.listab.end());
    return tmp;
}

template class Lista<int>;
