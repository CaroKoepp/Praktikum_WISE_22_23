#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int n) {
    content = new char[n];
    maxSize = n;
    aSize = 0;
}

bool Stack::empty(){
    if(aSize == 0){
        return true;
    }
    else{
        return false;
    }
}

void Stack::pop() {
    if(aSize>0){
        aSize--;
    }
}

void  Stack::push(char c) {
    cout << aSize << " " <<maxSize << endl;
    if(aSize >= maxSize ){
        cout << "expanding content" << endl;
        expandContent();

    }
    content[aSize] = c;
    aSize++;
}

void Stack::expandContent() {

    char* expContent = new char[2*maxSize];
    for(int i = 0; i<maxSize; i++){
        expContent[i] = content[i];
    }
    delete[] content;
    maxSize = 2* maxSize;
    content = expContent;

}

int Stack::size(){
    return aSize;
}

char Stack::top(){
    if(aSize >0){
        return content[aSize-1];
    }
    else{
        return ' ';
    }
}

void Stack::clear() {
    for (int i = 0; i < 100 ; i++) {
        content[i]  = 'a';
    }
    aSize = 0;
}

Stack::~Stack(){
    delete[] content;
};
