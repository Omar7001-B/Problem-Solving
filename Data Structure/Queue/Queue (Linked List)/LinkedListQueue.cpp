#include <bits/stdc++.h>

using namespace std;
void Benji();

struct Node {
	int data;
	Node* next;
};

class Queue {
private:
	Node* i_front;
	Node* i_back;
public:
	Queue() {
		i_front = NULL;
		i_back = NULL;
	}

	void enqueue(int value) {
		Node* new_node = new Node;
		new_node->next = NULL; // back should always be NULL
		new_node->data = value;
		if (i_front == NULL) { // queue was empty
			i_front = new_node;
			i_back = new_node;
		}
		else { // not empty
			i_back->next = new_node;
			i_back = new_node;
		}
	}

	void dequeue() { // Remember in queue we delete from the front
		Node* new_node = i_front;
		if (i_front == NULL) { // queue was empty
			cout << "No elements to dequeue, Queue is empty\n";
			return;
		}
		else { // not empty
			i_front = new_node->next;
			delete(new_node);
		}
	}

	void print() {
		Node* pt = i_front;
		if (i_front == NULL) {
			cout << "No elements to print, Queue is empty\n";
			return;
		}

		while (pt != NULL) {
			cout << pt->data << ' ';
			pt = pt->next;
		}
		cout << '\n';
	}

	bool find(int value, int i_last = INT_MAX, bool is_print = true) {
		Node* pt = i_front;
		bool flag = false;
		int i = 0;
		while (pt != NULL && i < i_last) {
			if (pt->data == value) {
				if (is_print)
					cout << "Elemnent is found on index " << i << '\n';
				flag = true;
			}
			i++;
			pt = pt->next;
		}

		if (!flag) {
			if (is_print)
				cout << "Element is not found\n";
		}
		return flag;
	}


	void print_distinct() {
		Node* pt = i_front;
		if (i_front == NULL) {
			cout << "No elements to print, Queue is empty\n";
			return;
		}

		int i = 0;
		while (pt != NULL) {
			if (!find(pt->data, i, 0))
				cout << pt->data << ' ';
			pt = pt->next;
			i++;
		}
		cout << '\n';
	}

};

int main()
{
	Benji();

	Queue q1;
	q1.enqueue(5);
	q1.enqueue(6);
	q1.enqueue(7);
	q1.enqueue(8);
	q1.enqueue(9);

	q1.enqueue(6);
	q1.enqueue(11);
	q1.print();
	q1.print_distinct();




	return 0;
}


















void Benji()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	srand(time(NULL));
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
}
