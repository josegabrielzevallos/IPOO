
#include <iostream>
#include "_stack.h"

int main(){
	
    Stack <int> j;
    j.push(3);
    j.push(4);
    j.pop();
    cout << j.top() << endl;

    Stack<int> k;
    k.push(8);
    k.push(11);

    Stack<int> l = j + k;
    cout << l.top() << endl;
	
    return 0;
	
}
