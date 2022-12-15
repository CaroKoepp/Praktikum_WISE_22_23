//
// Created by uif41552 on 11.11.2022.
//
#include "Stack.h"
#include <iostream>
using namespace std;

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
    if(aSize < 100){
        content[aSize] = c;
        aSize++;
    }
    else{
        cout << " No space left" << endl;
    }
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
        content[i]  = '\0';
    }
    aSize = 0;
}
