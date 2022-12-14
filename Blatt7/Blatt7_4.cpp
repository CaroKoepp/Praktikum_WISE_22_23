#include <iostream>
using namespace std;

bool prim(int x){
    int y = 2;
    while(y<x){
        if(x%y == 0){
            return false;
        }
        y++;
    }
    return true;
}

/*int main(){
    if(prim(2)){
        cout <<"Ist primzahl"  << endl;
    }
}*/
