#include <iostream>
using namespace std;

void zp(int a, int b){
    int zweiPot = 2;
    while(zweiPot <= b) {
        if (zweiPot >= a) {
            cout << zweiPot << " ";
        }
        zweiPot *=2;
    }
    cout << endl;
}

/*int main(){
    zp(10,200);
    zp(2, 3);
    zp(400, 3000);
}*/