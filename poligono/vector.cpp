#include "vector.h"

void Vector::getStart(){
	
	start.printPoint();
	
}

void Vector::getEnd(){
	
	end.printPoint();
	
}

void Vector::setStart(double sx, double sy){
	
	start.modifyPoint(sx, sy);
	
}

void Vector::setEnd(double ex, double ey){
	
	end.modifyPoint(ex, ey);
	
}

void Vector::printVector(){
	
	cout << "Vector: ";
	start.printPoint();
	cout << " -> ";
	end.printPoint();
	
}

void Vector::modifyVector(double sx, double sy, double ex, double ey){
	
	start.modifyPoint(sx, sy);
	end.modifyPoint(ex, ey);
	
}

void VectorArray::resize(int newSize){
	
	Vector *arrvec = new Vector[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i = 0; i < minSize; i++)
		vec[i] = vec[i];
		delete[] vec;
		size = newSize;
		vec = arrvec;
		
}

int VectorArray::getSize() const{
	
	cout<<size<<endl;
	
	return 0;
	
}

void VectorArray::clear(){
	
	resize(0);
	
}

void VectorArray::push_back(const Vector &v){
	
	resize(size + 1);
	vec[size - 1] = v;
	
}

void VectorArray::insert(const int pos, const Vector &v){
	
	resize(size + 1);
	
	for(int i = size - 1; i > pos; i--)
		vec[i] = vec[i - 1];
		
		vec[pos] = v;
}

void VectorArray::remove(const int pos){
	
	if(pos >= 0 && pos < size){
		for(int i = pos; i < size - 2; i++) {
			vec[i] = vec[i + 1];
		}
		resize (size - 1);
	}
	
}

void VectorArray::printArr(){
	
	for(int i=0; i < size; i++){
		cout << "Vector[" << i << "]: ";
		vec[i].getStart();
		cout << " -> ";
		vec[i].getEnd();
		cout << endl;
	}
	
}
