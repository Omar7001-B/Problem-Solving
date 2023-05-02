//
// Created by Omar on 3/28/2023.
//

#include <iostream>
#include <string>
#include "Queue.h"

template<typename T>
Queue<T>::Queue(int size) {
    capacity = size;
    arr = new T[capacity];
    i_front = -1;
    i_back = -1;
}

template<typename T>
Queue<T>::~Queue() {
    delete[] arr;
}

template<typename T>
bool Queue<T>::empty() {
    return (i_front == -1 && i_back == -1);
}

template<typename T>
void Queue<T>::push(T val) {
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

template<typename T>
void Queue<T>::pop() {
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

template<typename T>
int Queue<T>::size() {
    if (empty()) {
        return 0;
    }
    else {
        return (i_back - i_front + capacity) % capacity + 1;
    }
}

template <typename T>
T Queue<T>::front() {
    if (empty()) {
        std::cout << "Queue is empty\n";
        return arr[0];
    }
    else {
        return arr[i_front];
    }
}

// End of Path: Queue.cpp
void BURG1() {
    Queue<int> q(5);
    q.push(1), q.pop(), q.front(), q.size(), q.empty();
}

void BURG2() {
    Queue<long long> q(5);
    q.push(1), q.pop(), q.front(), q.size(), q.empty();
}
void BURG3() {
    Queue<double> q(5);
    q.push(1.0), q.pop(), q.front(), q.size(), q.empty();
}
void BURG4() {
    Queue<float> q(5);
    q.push(2.5), q.pop(), q.front(), q.size(), q.empty();
}

void BURG5() {
    Queue<std::string> q(5);
    q.push("Hello"), q.pop(), q.front(), q.size(), q.empty();
}

void BURG6() {
    Queue<char> q(5);
    q.push('c'), q.pop(), q.front(), q.size(), q.empty();
}
