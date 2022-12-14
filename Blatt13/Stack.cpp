#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int n) {
    content = new char[n];
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
        //content[aSize-1] = '\0';
        aSize--;
    }
}

void  Stack::push(char c) {
    int contentSize = (sizeof(content)/sizeof(char));
    if(aSize >= contentSize ){
        expandContent();
    }
    content[aSize] = c;
    aSize++;
}

void Stack::expandContent() {
    int contentSize = (sizeof(content)/sizeof(char));
    char* expContent = new char[2*contentSize];
    for(int i = 0; i<contentSize; i++){
        expContent[i] = content[i];
    }
    delete content;
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
    delete content;
};
