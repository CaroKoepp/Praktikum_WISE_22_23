#include <iostream>
using namespace std;

enum monat{Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember};
struct Datum{
    int tag;
    monat Monat;
    int jahr;
};

void druckeDatum1( Datum d){ //wertübergabe; werte werden reinkopiert
    cout << d.tag <<"." << d.Monat << " " << d.jahr << endl;
}

void druckeDatum( Datum &d){ // adresse vom ersten eintrag von d
    cout << d.tag <<"." << d.Monat << " " << d.jahr<< endl;
}

void druckeDatum( Datum *d){ //pointer auf ersten eintrag von p (deshalb "->"; entspricht dereferenzierung)
    cout << d->tag <<"." << d->Monat << " " << d->jahr << endl;
}

/*int main(){
    Datum d{22,November,2022};
    druckeDatum1(d);
    druckeDatum(d);
    Datum *pd = &d;
    druckeDatum(pd);
}*/