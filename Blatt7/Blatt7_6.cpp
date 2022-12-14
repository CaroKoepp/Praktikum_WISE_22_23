#include <iostream>
using namespace std;

void addiere(int *arg1, int arg2){
    *arg1 = *arg1 + arg2;
}

int main(){
    int n = 10;
    int m = 5;
    addiere(&n,m);
    cout << n << endl;
}
