#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string eing1, eing2;
    cin >> eing1;
    cin >> eing2;
    string temp = eing1;
    temp.append(eing2);
    cout << temp << endl;

    temp = eing1;
    string s3 = temp + eing2;
    cout << s3 << endl;

    char ch1[eing1.size() +1];
    char ch2[eing2.size()+1];
    strcpy(ch1, eing1.c_str());
    strcpy(ch2, eing2.c_str());

    strcat(ch1, ch2);
    cout << ch1;
}
