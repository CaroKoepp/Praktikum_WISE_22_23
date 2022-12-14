#include <iostream>
#include "Stack.h"
#include <string>
using namespace std;
Stack s;

void handleKlammer(char k){
        if((s.top() == '(' and k ==')') or (s.top() == '{' and k =='}') or (s.top() == '[' and k ==']')){
            s.pop();
        }
        else{
            s.push(k);
        }
}

/*int main()
{
    //Carola, nicht vergessen, Aufg1 kann man ausklappen
    //region Ausklappen für Aufgabe 1
    s.clear();
    s.push('a');
    s.push('b');
    s.push('c');
    printf("Oberstes Element: %c\n", s.top()); // liefert ’c’
    s.pop();
    printf("Anzahl Elemente: %i\n", s.size()); // liefert 2
    s.pop();
    printf("Oberstes Element: %c\n", s.top()); // liefert ’a’
    //endregion
    cout << "beginne aufg2 " << endl;
    s.clear();
    string ausdruck ="((()))";
    for (int i = 0; i<ausdruck.length(); i++) {
        handleKlammer(ausdruck[i]);
    }
    if(s.size() == 0){
        cout << "Klammern ausgeglichen" << endl;
    }
    else{
        cout << "Klammern nicht ausgeglichen" << endl;
    }
    return 0;
}*/
