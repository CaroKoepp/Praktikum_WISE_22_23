#include <iostream>
using namespace std;
int zahlen[5], i, j;

void ausgabeZahlen(){
    cout << "\t";
    for(int k : zahlen){
        cout << "["<<k<<"] ";
    }
    cout <<endl;
}

/*int main(){
    for (i = 20; i > 15; i=i-1){ //5x durchlaufen
        zahlen[20-i] = i % 3; //20 %3 = 2; 19 %3 = 1; 18 %2 = 0; 17 %3 = 2; 16%3 = 1
    }
    //Zahlen: 2; 1; 0; 2; 1;
    ausgabeZahlen();
    for (i = 0; i < 5; i=i+1){ //5x Durchlaufen
        cout <<"i = "<< i <<endl;
        for (j = 5; j > 0; j=j-2){ //3x durchlaufen
            cout << "\tj = " << j << endl;
            zahlen[5-j] = zahlen[i/2] + zahlen[j-1];
            ausgabeZahlen();
        }
    }
    return 0;
}*/
