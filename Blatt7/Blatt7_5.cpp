#include <iostream>
#include <cstring>
using namespace std;

void stat(const char *s){
    int anzZeichen = 0, anzWorte = 0;
    if(anzZeichen!= 0){
        anzWorte++;
    }
    anzZeichen = strlen(s);
    for (int i = 1; i <anzZeichen ; ++i) {
        if( s[i] == ' ' && s[i-1] != ' '){
            anzWorte++;
        }
    }

    cout << "Anzahl der zeichen: " << anzZeichen << endl << "Anzahl der Worte: " << anzWorte << endl;
}

/*int main(){
    stat("H  H  H  H  H ");
}*/