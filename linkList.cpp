
#include "linkList.h"
using namespace std;

// Node class constructor
Node::Node(int value) : data(value), next(nullptr) {}

// LinkedList class constructor
LinkedList::LinkedList() : head(nullptr) {}

// LinkedList class destructor
LinkedList::~LinkedList() {
    clear();
}

// Function to append a node to the end of the list
void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to insert a node at a specific position in the list
void LinkedList::insert(int value, int position) {
    if (position < 0) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(value);

    if (position == 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Invalid position\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to delete a node at a specific position in the list
void LinkedList::deleteNode(int position) {
    if (position < 0 || head == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    Node* temp = head;

    if (position == 0) {
        head = head->next;
        delete temp;
    }
    else {
        for (int i = 0; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
           cout << "Invalid position\n";
            return;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// Function to display the elements of the list
void LinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// Function to clear the entire list
void LinkedList::clear() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

