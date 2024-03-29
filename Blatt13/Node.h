//
// Created by uif41552 on 24.11.2022.
//

#ifndef BLATT13_NODE_H
#define BLATT13_NODE_H


class Node {
private:
    bool isSorted;
    int value; // Wert des Listenelementes
    Node *next; // Zeiger auf das nächste Listenelement
    void sort();
// NULL, bei Ende der Liste
public:
    void insert(int value); // Einfügen eines Knotens
    void insertSort(int value);
    Node* remove(int value); // Lösche den Knoten mit Wert value
    void print();
    int length();
    Node(int value); // Konstruktor: Erzeugen eines Knotens
    ~Node(); // Destruktor
};


#endif //BLATT13_NODE_H
