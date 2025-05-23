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
            cout << "Stack is empty." << endl return;
        }

        Node *temp = top; // create temporary pointer
        top = top->next;  // update the top pointer to the next node
        cout << "Popped Value: " << temp->data << endl;
        delete temp;
    }
    // peek Top operation: retrive the value of the topmost element without remove
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }
    // is empty operation, check is the stack empty
    bool isEmpty()
    {
        return top == NULL; // return the if too pointer us null. indicate an empty stack
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Valuse to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;
        case 2:
            if (!stack.isEmpty())
            {
                stack.pop(); // pop the top element from the stack
            }
            else
            {
                cout << "stack is empty, cannot pop" << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peek();
            }
            else
            {
                cout << "stack is empty, no top value" << endl;
            }
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "invalid choice. try again." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
};