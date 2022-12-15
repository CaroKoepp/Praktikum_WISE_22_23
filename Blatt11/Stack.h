//
// Created by uif41552 on 11.11.2022.
//

#ifndef BLATT9_STACK_H
#define BLATT9_STACK_H
class Stack {
    int aSize;
    char content[100];
public:
    bool empty();
    void pop();
    void push(char c);
    int size();
    char top();
    void clear();
};
#endif //BLATT9_STACK_H
