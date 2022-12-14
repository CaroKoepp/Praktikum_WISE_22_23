//
// Created by uif41552 on 18.11.2022.
//
#include <iostream>
#include <fstream>
using namespace std;

string toUpper(string lower){
    cout << lower.length() << endl;
    for(int i = 0; i<lower.length(); i++){
        if(96<lower[i]and lower[i]<123){ //Überprüfen ob zeichen kleinbuchstabe
            lower[i] -= 32;//ascii von klein -32 = ascii von groß
        }
        else{
        }
    }
    return lower;
}
/*int main(){
    ifstream fin;
    string input;
    fin.open(R"(C:\Users\uif41552\Documents\HFU\Blatt12\klein.txt)");
    if(fin.is_open()){
        int i = 0;
        while(!fin.eof()){
            input += fin.get();
        }
        string upperCaseText = toUpper(input);
        ofstream fout;
        fout.open(R"(C:\Users\uif41552\Documents\HFU\Blatt12\gross.txt)");
        i = 0;
        while(i<upperCaseText.length()-1){ // last char is \0 and creates problems if you try to write it
            fout << upperCaseText[i];
            i++;
        }
        fin.close();
        fout.close();
    }
    return 0;
}*/