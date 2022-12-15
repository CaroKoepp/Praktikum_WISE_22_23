#include <iostream>
#include "SafeArray.h"
using namespace std;
int main() {
    SafeArray arr(73);
    cout <<arr.setAt(-3,40) << endl;
    cout << arr.getMinimum()<< endl;
    cout <<arr.getAt(0)<< endl;
    cout <<arr.setAt(42,99,42);
    for( int i = 0; i<100; i++){
        cout << arr.getAt(i) << " ";
    }

}
