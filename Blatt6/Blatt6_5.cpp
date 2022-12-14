#include <iostream>

using namespace std;

void dreh( char* s){
    int length = 0;
    while(s[length] != '\0'){
        length++;
    }
    for(int i = length-1; i>=0 ; i--){
        cout << s[i];
    }
}

/*int main(){
    char str[] = "this has a \n endline";
    dreh(str);
}*/
