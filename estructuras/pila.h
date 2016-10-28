#include <vector>
#include <iostream>
using namespace std;

template<typename N>
class Pila
{
private:
    vector<N> pilab;
public:
    bool vacio();
    int tamano();
    N top();
    void push(N x);
    void pop();
    void print();
    Pila<N> operator+ (Pila<N> pil);
    Pila<N> operator- (Pila<N> pil);

};
