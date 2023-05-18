#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Queue {
private:
    T* arr;
    int capacity;
    int i_front;
    int i_back;

public:
    // Constructor
    Queue(int size) {
        capacity = size;
        arr = new T[capacity];
        i_front = -1;
        i_back = -1;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }

    // Check if the queue is empty
    bool empty() {
        return (i_front == -1 && i_back == -1);
    }

    // Add an element to the back of the queue
    void push(T val) {
        if ((i_back + 1) % capacity == i_front) {
            std::cout << "Queue is full\n";
            return;
        }
        else if (empty()) {
            i_front = 0;
            i_back = 0;
        }
        else {
            i_back = (i_back + 1) % capacity;
        }
        arr[i_back] = val;
    }

    // Remove the element from the front of the queue
    void pop() {
        if (empty()) {
            std::cout << "Queue is empty\n";
            return;
        }
        else if (i_front == i_back) {
            i_front = -1;
            i_back = -1;
        }
        else {
            i_front = (i_front + 1) % capacity;
        }
    }

    // Get the element at the front of the queue
    T front() {
        if (empty()) {
            std::cout << "Queue is empty\n";
            return arr[0];
        }
        else {
            return arr[i_front];
        }
    }

    // Get the current size of the queue
    int size() {
        if (empty()) {
            return 0;
        }
        else {
            return (i_back - i_front + capacity) % capacity + 1;
        }
    }
};

// Example usage
void BURG() {
    // Create objects of the Queue class with different data types
    Queue<int> q1(5);
    Queue<long long> q2(5);
    Queue<double> q3(5);
    Queue<float> q4(5);
    Queue<std::string> q5(5);
    Queue<char> q6(5);

    // Perform operations on each queue object
    q1.push(1); q1.pop(); q1.front(); q1.size(); q1.empty();
    q2.push(1); q2.pop(); q2.front(); q2.size(); q2.empty();
    q3.push(1.0); q3.pop(); q3.front(); q3.size(); q3.empty();
    q4.push(2.5); q4.pop(); q4.front(); q4.size(); q4.empty();
    q5.push("Hello"); q5.pop(); q5.front(); q5.size(); q5.empty();
    q6.push('c'); q6.pop(); q6.front(); q6.size(); q6.empty();
}

int main() {
    Queue<int> q(5);
    cout << "Hello, World!" << endl;
    cout << "Is queue empty? " << q.empty() << "\n";
    cout << "Size of queue: " << q.size() << "\n\n";

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Is queue empty? " << q.empty() << "\n";
    cout << "Size of queue: " << q.size() << "\n";

    while (!q.empty()) {
        cout << "Front of queue: " << q.front() << "\n";
        q.pop();
    }
    cout << "Is queue empty? " << q.empty() << "\n";
}
