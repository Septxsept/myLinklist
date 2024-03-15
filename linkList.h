// linkList.h

#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value);

};

class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Function to append a node to the end of the list
    void append(int value);

    // Function to insert a node at a specific position in the list
    void insert(int value, int position);

    // Function to delete a node at a specific position in the list
    void deleteNode(int position);

    // Function to display the elements of the list
    void display();

    // Function to clear the entire list
    void clear();
};

#endif  // LINKLIST_H
