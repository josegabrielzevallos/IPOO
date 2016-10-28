#include <vector>

using namespace std;

template<typename N>
class Lista {
private:
    vector<N> listab;
public:
    typename vector<N>::iterator begin();
    typename vector<N>::iterator end();
    bool vacia();
    int tamano();
    void insertar(int pos, N x);
    void borrar(int pos);
    void pushfront(N x);
    void pushback(N x);
    void popfront();
    void popback();
    void print();
    Lista<N> operator+ (Lista<N> l);
    Lista<N> operator- (Lista<N> l);


};
