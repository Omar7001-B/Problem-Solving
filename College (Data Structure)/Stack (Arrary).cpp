#include <iostream>
using namespace std;

class Stack {
public:
    Stack(int size = 10) {           // constructor
        maxTop = size - 1;                  // Set the maximum top index
        top = -1;                           // Initialize top as -1 (empty stack)
        values = new double[size];          // Create an array of given size to store the elements
    }

    ~Stack() { delete [] values; }  // destructor

    bool IsEmpty() {
        return top == -1;
    }

    bool IsFull() {
        return top == maxTop;
    }

    double Top() {
        if (IsEmpty()) {
            cout << "Stack is empty. Top() cannot be performed.\n";
            return 0.0;                     // Return a default value if stack is empty
        }
        return values[top];                 // Return the value at the top of the stack
    }

    void Push(const double x) {
        if (IsFull()) {
            cout << "Stack is full. Push() cannot be performed.\n";
            return;                         // Exit the function if stack is full
        }
        top++;                              // Increment the top index
        values[top] = x;                    // Add the new element to the stack
    }

    double Pop() {
        if (IsEmpty()) {
            cout << "Stack is empty. Pop() cannot be performed.\n";
            return 0.0;                     // Return a default value if stack is empty
        }
        double temp = values[top];          // Store the value at the top of the stack
        top--;                              // Decrement the top index
        return temp;                        // Return the stored value
    }

    void DisplayStack() {
        if (IsEmpty()) {
            cout << "Stack is empty. Nothing to display.\n";
            return;                         // Exit the function if stack is empty
        }
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << values[i] << " ";       // Display each element in the stack from top to bottom
        }
        cout << endl;
    }

private:
    int maxTop;         // max stack size = size - 1
    int top;            // current top of stack
    double* values;     // element array
};

int main() {
    Stack stack(5);                     // Create a stack object of size 5

    stack.Push(1.2);                    // Push elements onto the stack
    stack.Push(2.3);
    stack.Push(3.4);
    stack.Push(4.5);
    stack.Push(5.6);

    stack.DisplayStack();               // Display the stack

    cout << "Top element: " << stack.Top() << endl;  // Display the top element

    cout << "Popped element: " << stack.Pop() << endl;  // Pop an element

    stack.DisplayStack();               // Display the updated stack

    return 0;
}
