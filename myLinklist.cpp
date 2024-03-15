// myLinkList.cpp



#include "linkList.h"
using namespace std;

int main() {
    LinkedList myList;

    cout << "C++ CIS245 ** Name: Komlaga Gone **          C++" << endl;
    cout << "C++ CIS245 ** Chapter 11 linklist **          C++" << endl;
    cout << "C++ CIS245 ** #1 Your Own Linked List. **     C++" << endl;
    cout << "C++ CIS245 ** Date Submitted:  11/30/2023 **    C++" << endl;


    myList.append(10);
    myList.append(20);
    myList.append(30);

    cout << "Original List: ";
    myList.display();

    myList.insert(15, 1);
    cout << "After Inserting 15 at position 1: ";
    myList.display();

    myList.deleteNode(2);
    cout << "After Deleting element at position 2: ";
    myList.display();

    return 0;
}
