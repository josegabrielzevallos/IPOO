#include <vector>
#include <iostream>
using namespace std;

template<typename N>
class Cola
{
private:
    vector<N> colab;
public:
    bool vacio();
	int tamano();
	N frente();
	N atras();
	void push(N val);
	void pop();
	void print();
	Cola<N> operator+ (Cola<N> col);
	Cola<N> operator- (Cola<N> col);


};
