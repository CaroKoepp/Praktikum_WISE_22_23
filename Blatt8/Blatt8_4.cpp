#include <iostream>
using namespace std;

enum monat{Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember};
struct Datum{
    int tag;
    monat Monat;
    int jahr;
};

bool bevor(const Datum &a, const Datum &b){
    if(a.jahr<b.jahr){
            return true;
        }
    else if(a.jahr > b.jahr){
        return false;
    }
    else{
        if(a.Monat < b.Monat){
            return true;
        }
        else if(a.Monat>b.Monat){
            return false;
        }
        else{
            if(a.tag < b.tag){
                return true;
            }
            else{
                return false;
            }
        }
    }
}

/*int main(){
    Datum d1 {10, November, 2022};
    Datum d2{11, November, 2022};

    cout << bevor(d1, d2);
}*/
