//
// Created by Omar on 3/28/2023.
//
template<typename T>
class Queue {
private:
    T *arr;
    int capacity;
    int front;
    int back;
public:
    Queue(int size);
    ~Queue();
    bool empty();
    void push(T val);
    void pop();
    int size();
};



