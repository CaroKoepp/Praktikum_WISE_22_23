//
// Created by uif41552 on 23.11.2022.
//

#ifndef BLATT13_STACK_H
#define BLATT13_STACK_H


class Stack {
    int aSize;
    char* content;
    void expandContent();
public:
    Stack(int n);
    ~Stack();
    bool empty();
    void pop();
    void push(char c);
    int size();
    char top();
    void clear();
};


#endif //BLATT13_STACK_H
