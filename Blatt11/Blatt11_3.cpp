#include <iostream>
#include <time.h>
using namespace std;

//Aufgabe 1 + 2: Siehe Aufg. 9
int* userEingabe(){
    static int userEingabe[6];
    for(int i = 0; i<6; i++){
        cout << "Bitte Zahl " << i+1 << " eingeben: " << endl;
        cin >> userEingabe[i];
    }
    return userEingabe;
}

int* zieheGZ(){
    static int gezogZahlen[] = {0, 0, 0, 0, 0, 0};
    int anzGezogeneZahlen = 0;
    int gezogeneZahl;
    bool istImArray = false;
    while(anzGezogeneZahlen <6){
        gezogeneZahl = 1 + rand()%50;
        for(int i = 0; i<6; i++){
            if(gezogZahlen[i] == gezogeneZahl){
                istImArray = true;
            }
        }
        if(!istImArray){
            gezogZahlen[anzGezogeneZahlen] = gezogeneZahl;
            anzGezogeneZahlen++;
        }
        istImArray = false;
    }
    return gezogZahlen;
}

int* zieheLZ(){
    static int lottozahlen[] = {0,0,0,0,0,0};
    int anzGezogeneZahlen = 0;
    int gezogeneZahl;
    bool istImArray = false;
    while(anzGezogeneZahlen <6){
        gezogeneZahl = 1 + rand()%50;
        for(int i = 0; i<6; i++){
            if(lottozahlen[i] == gezogeneZahl){
                istImArray = true;
            }
        }
        if(!istImArray){
            lottozahlen[anzGezogeneZahlen] = gezogeneZahl;
            anzGezogeneZahlen++;
        }
        istImArray = false;
    }
    return lottozahlen;
}

int auswertung(int* lZ, int* uE){
    int anzRichtige = 0;
    for(int i = 0; i<6; i++){
        if(*(lZ+i) == *(uE+i)){
            anzRichtige ++;
        }
    }
    return anzRichtige;
}

void printArray(int* arr){
    for(int i = 0; i<6; i++){
        cout<< "["<<*(arr+i)<<"] ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    //int* getippteZahlen = userEingabe();
    //int* lottozahlen = ziehe();
    //int richtige = auswertung(lottozahlen, getippteZahlen);
    //cout << "Anzahl richtige Zahlen: " << richtige << endl;

    int anz3Richtige  = 0;
    double versuche = 0;
    int anzRichtige = 0;
    int* gezogZ;

    int *lottozahlen = zieheLZ() ;
    printArray(lottozahlen);
    while(anz3Richtige < 5 and versuche <100000){
        versuche++;
        gezogZ = zieheGZ();
        anzRichtige = auswertung(lottozahlen, gezogZ );
        if( anzRichtige == 3){
            printArray(gezogZ);
            anz3Richtige++;
        }
    }
    cout <<" Anzahl Versuche: " << versuche << endl;
}
