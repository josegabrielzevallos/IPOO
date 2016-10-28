#include "Cola.h"



template<typename N>
bool Cola<N>::vacio(){
	return colab.empty();
}

template<typename N>
int Cola<N>::tamano(){
	return colab.size();
}

template<typename N>
N Cola<N>::frente(){
	return colab.front();
}

template<typename N>
N Cola<N>::atras(){
   return colab.back();
}

template<typename N>
void Cola<N>::push(N val){
	colab.push_back(val);
}

template<typename N>
void Cola<N>::pop(){
	colab.erase(colab.begin());
}

template<typename N>
void Cola<N>::print(){
	for(int i=0; i < colab.size(); i++){
		cout << colab[i] << " ";
	}
	cout << endl;
}

template<typename N>
Cola<N> Cola<N>::operator+(Cola<N> col)
{
    Cola<N> tmp;
    tmp.colab = colab;
    tmp.colab.insert(tmp.colab.end(), col.colab.begin() , col.colab.end());
    return tmp;

}

template class Cola<int>;
