#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct  Punkt{
    int x;
    int y;
};

/*int main() {
    //Aufgabe 1
    Punkt p1{1,2};
    Punkt p2{2,3};
    Punkt p3{(p1.x + p2.x), (p1.y + p2.y)};

    cout << p1.x << " " << p2.x << endl;

    //Aufgabe 2

    Punkt pA[50];
    srand(time(0));
    for (int i = 0; i < 50 ;i++) {
        pA[i].x = rand();
        pA[i].y = rand();
    }

    int minX = 0, maxX = 0, minY = 0, maxY = 0;
    for (int i = 0; i < 50; i++) {
        if(pA[minX].x < pA[i].x){
            minX = i;
        }
        if(pA[maxX].x > pA[i].x){
            maxX = i;
        }
        if(pA[minY].y < pA[i].y){
            minY = i;
        }
        if(pA[maxY].y > pA[i].y){
            maxX = i;
        }

        cout << i << " ";
    }

    cout << "Kleinster x wert: " << minX << " groesster X wert " << maxX << " kleinster y wert " << minY << " groesster y wert " << maxY << endl;
}*/
