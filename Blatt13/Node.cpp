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
    while (n != NULL){ // Iteriere so lange, bis keine n = n->next; // weitere Node Instanz kommt
        ret++;
    }
    return ret;
}

void Node::insert(int value){ // Erzeuge einen neuen Knoten
    Node *n = new Node(value); // und hänge diesen an den
    n->next = this->next; // aktuellen "this" Knoten
    this->next = n;
}