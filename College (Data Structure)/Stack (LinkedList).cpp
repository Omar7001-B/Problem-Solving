#include <iostream>
using namespace std;

class Node { // Node class represents a single element in the stack
public:
    int data;     // Data stored in the node
    Node* next;   // Pointer to the next node
    
    Node(int value) : data(value), next(nullptr) {} // Constructor to initialize a new node
};


class Stack { // Stack class represents the stack data structure
private:
    Node* top;   // Pointer to the topmost element of the stack

public:
    
    Stack() : top(nullptr) {} // Constructor to initialize an empty stack

    ~Stack() { // Destructor to deallocate memory used by the stack
        while (!isEmpty()) {
            pop();
        }
    }

    
    bool isEmpty() { // Check if the stack is empty
        return top == nullptr;
    }

    
    void push(int value) { // Push an element onto the stack
        Node* newNode = new Node(value); // Create a new node
        newNode->next = top; // Set the new node's next pointer to the current top node
        top = newNode; // Set the new node as the new top node
    }

    
    void pop() { // Pop the top element from the stack
        if (isEmpty()) {
            std::cout << "Stack underflow error. Unable to pop from an empty stack." << std::endl;
            return;
        }
        Node* temp = top; // Store the current top node
        top = top->next; // Move the top pointer to the next node
        delete temp; // Delete the old top node
    }

    
    int peek() { // Get the top element of the stack
        if (isEmpty()) {
            std::cout << "Stack is empty. Unable to peek." << std::endl;
            return -1;
        }

        return top->data;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Top element after popping: " << stack.peek() << std::endl;

    return 0;
}
#include <iostream>

// Node class represents a single element in the stack
class Node {
public:
    int data;     // Data stored in the node
    Node* next;   // Pointer to the next node

    // Constructor to initialize a new node
    Node(int value) : data(value), next(nullptr) {}
};

// Stack class represents the stack data structure
class Stack {
private:
    Node* top;   // Pointer to the topmost element of the stack

public:
    // Constructor to initialize an empty stack
    Stack() : top(nullptr) {}

    
    ~Stack() { // Destructor to deallocate memory used by the stack
        while (!isEmpty()) {
            pop();
        }
    }
    
    bool isEmpty() { // Check if the stack is empty
        return top == nullptr;
    }

    
    void push(int value) { // Push an element onto the stack
        Node* newNode = new Node(value); // Create a new node
        newNode->next = top; //  Set the new node's next pointer to the current top node
        top = newNode; // Set the new node as the new top node
    }

    // Pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow error. Unable to pop from an empty stack." << std::endl;
            return;
        }

        Node* temp = top; // Store the current top node
        top = top->next; // Move the top pointer to the next node
        delete temp; // Delete the old top node
    }

    // Get the top element of the stack
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Unable to peek." << std::endl;
            return -1;
        }

        return top->data;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Top element after popping: " << stack.peek() << std::endl;

    return 0;
}
