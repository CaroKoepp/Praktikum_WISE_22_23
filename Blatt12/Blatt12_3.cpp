#include <iostream>
#include <time.h>
using namespace std;

int vergleicheString(string basis, string suche) {
    int treffer = 0, iBasis = 0, iSuche = 0;
    bool erg = true;
    int basislaenge = basis.length();
    int suchlaenge = suche.length();
    if (basislaenge >= suchlaenge and basislaenge != 0 and suchlaenge != 0) {
        while (iBasis < basislaenge) {
            while (iSuche < suchlaenge) {
                erg = erg && (basis[iBasis + iSuche] == suche[iSuche]);
                iSuche++;
            }
            if (erg) {
                treffer++;
            } else {
                erg = true;
            }
            iSuche = 0;
            iBasis++;
        }
    }
    return treffer;
}

int vergleicheChar( const char *s, const char *m){
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
    string s1 = "Dies ist ein beispieltext";
    string s2 = "ie";

    char c1[] = "Dies ist ein beispieltext";
    char c2[] = "ie";
    double start =
    cout <<"Strings: " << s2 <<  " kommt " << vergleicheString(s1, s2)<<" mal in " << s1 << " vor." <<endl;
    cout <<"Char Array: "<< c2 <<  " kommt " << vergleicheString(c1, c2)<<" mal in " << c1 << " vor." <<endl;
}*/