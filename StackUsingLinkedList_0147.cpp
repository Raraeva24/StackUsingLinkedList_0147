#include <iostream>

using namespace std;

class Node
// node class representing a sigle node in the linked list
{
public:
    int data;
    Node *next;
    Node()
    {
        next = NULL:
    }
};
// stack class
class stack
{
    Node *top; // pointer to the top node od the stack
public:
    stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }

    // push operation: insert an element onto the top of the stack
    int push(int value) // operasi push
    {
        Node *newNode = new Node(); // 1. allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the new pointer of the new node
        top = newNode;              // 4. update the top pointer into the new node
        cout << "Push value: " << value << endl;
        return value;
    }
    // pop operation: remove topmost element from stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl
            return;
        }

        Node *temp = top; // create temporary pointer
        top = top->next;  // update the top pointer to the next node
        cout << "Popped Value: " << temp->data << endl;
        delete temp;
    }
}