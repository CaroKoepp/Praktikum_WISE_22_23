#include <iostream>
#include "Stack.h"
#include "Node.h"

using namespace  std;
int main() {
    /*Stack s(3);
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
    cout << s.top();*/

    Node n0(0);
    n0.insert(0);
    for(int i = 9; i>=0; i--){
        n0.insert(i);
    }
    n0.print();
    cout << endl;
    n0.insertSort(10);
    n0.print();
    return 0;
}
