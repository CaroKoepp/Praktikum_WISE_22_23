//
// Created by uif41552 on 24.11.2022.
//

#include <cstddef>
#include "Node.h"
Node::Node(int value){ // Konstruktor
    this->value = value;
    this->next = NULL;
}
Node::~Node(){} // Destruktor

int Node::length(){
    Node* n = this;
    int ret = 0;
    while (n != NULL){ // Iteriere so lange, bis keine
        n = n->next; // weitere Node Instanz kommt
        ret++;
    }
    return ret;
}

void Node::insert(int value){ // Erzeuge einen neuen Knoten
    Node *n = new Node(value); // und hänge diesen an den
    Node *pos = this;
    while(pos->next != NULL){
        pos = pos->next;
    }
    pos->next = n;
}
void Node::sort(){
   int l = this->length();
   Node *n = this;
   int temp;
   for(int i = 0; i < l-1; i++){
       for(int j = 0; j < l-i-1; j++){
           if(n->next!= NULL){
               if(n->value > n->next->value){
                   temp = n->value;
                   n->value = n->next->value;
                   n->next->value = temp;
               }
               n = n->next;
           }
           else {
               break;
           }
       }
   }
}

void Node::insertSort(int v) {
    this->sort();
    Node *pos = this;
    while(pos->value < v && pos->next != NULL){
        pos = pos->next;
    }
    Node *n = new Node(v);
    n->next = pos->next;
    pos->next = n;
}