#include <iostream>
using namespace std;

int vorkommen( const char *s, const char *m){
    int sZaehl = 0, mZaehl = 0, anz = 0;
    bool erg = true;
    while (s[sZaehl] != '\0'){
        while(m[mZaehl] != '\0'){
            erg = erg && (s[sZaehl+mZaehl] == m[mZaehl]);
            mZaehl ++;
        }
        if(erg){
            anz++;
        }
        else{
            erg = true;
        }
        mZaehl = 0;
        sZaehl ++;
    }
    return anz;
}

/*int main(){
     cout << vorkommen("Dies ist ein Beispieltext" , "ie");
}*/