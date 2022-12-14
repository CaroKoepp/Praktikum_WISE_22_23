//
// Created by uif41552 on 14.11.2022.
//

#include "SafeArray.h"

bool SafeArray::setAt(int val, int pos) {
    if(pos<100 and pos >-1)
        arr[pos] = val;
    return (pos<100 and pos >-1);
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
            arr[i] = min;
        }
    }
}

bool SafeArray::setAt(int val, int p1, int p2) {
    if(p1<= p2 and p1>-1 and p2 <100){
        for(int i = p1; i<=p2; i++){
            arr[i] = val;
        }
        return true;
    }
    else{
        return false;
    }
}

SafeArray::SafeArray(int y) {
    for(int i = 0; i<100; i++){
        arr[i] = y;
    }
}