//
// Created by Omar on 3/28/2023.
//
template<typename T>
class Queue {
private:
	T* arr;
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
