//
// Created by uif41552 on 14.11.2022.
//

#include "SafeArray.h"

bool SafeArray::setAt(int pos, int val) {
    if(pos>100 || pos<= 0)
        return false;
    this->arr[pos] = val;
    return true;
}

int SafeArray::getAt(int pos) {
    if(pos<100 and pos >-1){
        return arr[pos];
    }
    else{
        return 0;
    }
}

int SafeArray::getMinimum() {
    int min = arr[0];
    for(int i = 0; i<100; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

bool SafeArray::setAt(int val, int p1, int p2) {
    if( !(p1<= p2 and p1>-1 and p2 <100))
        return false;

    for(int i = p1; i<=p2; i++){
        arr[i] = val;
    }
    return true;
}

SafeArray::SafeArray(int y) {
    for(int i = 0; i<100; i++){
        arr[i] = y;
    }
}