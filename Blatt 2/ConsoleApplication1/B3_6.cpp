#include <stdio.h>
#include <iostream>
using namespace std;

int jahr;
int monat;
int tage;

bool istSchaltjahr(int j) {
    if ((j % 4 == 0 and j % 100 != 0) or j % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
	cout << "Bitte Jahr eingeben: ";
	cin >> jahr;
	cout << "Bitte Jahr eingeben: ";
	cin >> monat;

    if( monat == 2){
        if (istSchaltjahr(jahr)) {
            tage = 29;
        }
        else {
            tage = 28;
        }
    }
    else if (monat == 4 or monat == 6 or monat == 9 or monat == 11) {
        tage = 30;
    }
    else {
        tage = 31;
    }
    
    cout << "Der " << monat << ". Monat im Jahr " << jahr << " hat " << tage << " Tage" << endl;
    return 0;
}