#include<stdio.h>
#include <iostream>
using namespace std;

    void istSchaltjahr(int j) {
    if ((j % 4 == 0 and j % 100 != 0) or j %400 ==0 ) {
        cout << j << " ist ein Schaltjahr" << endl;
    }
    else {
        cout << j << " ist kein Schaltjahr" << endl;
    }
}
/*int main()
{
    int jahr = 0;
    
    cout << "Bitte jahr eingeben" << endl;
    cin >> jahr;
    istSchaltjahr(jahr);
   
    return 0;
}*/


