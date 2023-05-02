//
// Created by Omar on 3/28/2023.
//

#ifndef QUEUE_H
#define QUEUE_H


template<typename T>
class Queue {
private:
    T* arr;
    int capacity;
    int i_front;
    int i_back;
public:
    Queue(int size);
    ~Queue();
    void push(T val);
    T front();
    void pop();
    int size();
    bool empty();
};

//#include "Queue.cpp"  // make sure to exclude the cpp file before this include

#endif //QUEUE_H
