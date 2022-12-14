#include <iostream>
#include <fstream>
using namespace std;

struct Tabelleneintrag {
    short Platz; // Platzierung des Vereins
    char Verein[30]; // Names des Vereins
    short GewonneneSpiele;
    short Remis;
    short VerloreneSpiele;
    short Tore;
    short Gegentore;
};

void printInDatei(Tabelleneintrag T){
    ofstream fout;
    fout.open(R"(C:\Users\uif41552\Documents\HFU\Blatt12\Output.txt)", std::ios_base::app);
    fout <<T.Platz << " " << T.Verein << " "<< T.GewonneneSpiele << " " << T.Remis << " " << T.VerloreneSpiele<< " " << T.Tore << ":" << T.Gegentore << endl;
    fout.close();
}

void print(Tabelleneintrag T){
    cout <<T.Platz << " " << T.Verein << " "<< T.GewonneneSpiele << " " << T.Remis << " " << T.VerloreneSpiele<< " " << T.Tore << ":" << T.Gegentore << endl;
}
int main() {
    Tabelleneintrag Tabelle[18];
    //File einlesen
    ifstream  fin;
    fin.open(R"(C:\Users\uif41552\Documents\HFU\Blatt12\Bundesligatabelle.txt)");
    if(fin.is_open()){
        for(int i = 0; i<18; i++ ){
            fin >> Tabelle[i].Platz;
            fin >> Tabelle[i].Verein;
            fin >> Tabelle[i].GewonneneSpiele;
            fin >> Tabelle[i].Remis;
            fin >> Tabelle[i].VerloreneSpiele;
            fin >> Tabelle[i].Tore;
            fin >> Tabelle[i].Gegentore;
        }
    }
    fin.close();
    for(int i = 0; i<18; i++){
        printInDatei(Tabelle[i]);
    }
    return 0;
}
