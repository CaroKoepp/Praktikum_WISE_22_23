#include <iostream>
using namespace std;
int berechne( int v1, int v2, char op){
    switch (op) {
        case '+':
            return v1 + v2;
        case '-':
            return  v1 - v2;
        case '*':
            return  v1 * v2;
        case '/':
            return  v1 / v2;
        default:
            return -999;
    }
}
/*int main(int argc, char *args[]) {
    //cout << berechne(5, 10, '*') <<endl;
    //cout << berechne(17, 3, '*') << endl;
    if(argc == 5){
        int p1 = atoi(args[2]);
        int p2 = atoi(args[3]);

        if (p1 !=0 && p2 != 0 && ( *args[4] == '+' || *args[4] == '-' ||*args[4] == '*' ||*args[4] == '/' )) {
            cout << berechne(p1, p2, *args[4]);
        }
        else{
                cout<< "Falscher operator" << endl;
            }

    } else{
            cout << " Falsche anzahl an Argumenten";
        }

    }*/


