#include <iostream>
using namespace std;

long ggt(long x, long y){
    if( x == y){
        return x;
    }
    else if(x>y){
         return ggt(x-y, y);
    }
    else if( x<y){
        return ggt(x, y-x);
    }
    else{
       return 0;
    }
}

long ggtwhile(long x, long y){
    while(x != y){
        if( x>y){
            x = x-y;
        }
        else if( y>x){
            y = y-x;
        }
    }
    return x;
}

/*int main(){
    cout << ggt(45,35) << endl;
    cout << ggtwhile(45,35) << endl;
}*/
