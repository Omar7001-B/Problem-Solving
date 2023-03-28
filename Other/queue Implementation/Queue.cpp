//
// Created by Omar on 3/28/2023.
//

#include <iostream>
#include "Queue.h"
template<typename T>
Queue<T>::Queue(int size) {
    capacity = size;
    arr = new T[capacity];
    front = -1;
    back = -1;
}

template<typename T>
Queue<T>::~Queue() {
    delete[] arr;
}

template<typename T>
bool Queue<T>::empty() {
    return (front == -1 && back == -1);
}

template<typename T>
void Queue<T>::push(T val) {
    if (back == capacity - 1) {
        std::cout << "Queue is full\n";
        return;
    }
    else if (empty()) {
        front = 0;
        back = 0;
    }
    else {
        back++;
    }
    arr[back] = val;
}

template<typename T>
void Queue<T>::pop() {
    if (empty()) {
        std::cout << "Queue is empty\n";
        return;
    }
    else if (front == back) {
        front = -1;
        back = -1;
    }
    else {
        front++;
    }
}

template<typename T>
int Queue<T>::size() {
    if (empty()) {
        return 0;
    }
    else {
        return (back - front) + 1;
    }
}

