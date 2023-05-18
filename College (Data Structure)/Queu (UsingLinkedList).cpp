#include <iostream>
#include <string>
using namespace std;
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
		i_front = NULL; // Initialize front pointer to NULL
		i_back = NULL; // Initialize back pointer to NULL
	}

	void enqueue(int value) {
		Node* new_node = new Node;
		new_node->next = NULL; // Set next pointer of the new node to NULL (back should always be NULL)
		new_node->data = value; // Assign the given value to the new node's data
		if (i_front == NULL) { // If the queue was empty
			i_front = new_node; // Set both front and back pointers to the new node
			i_back = new_node;
		}
		else { // If the queue was not empty
			i_back->next = new_node; // Add the new node after the current back node
			i_back = new_node; // Update the back pointer to the new node
		}
	}

	void dequeue() { // Remember in queue we delete from the front
		Node* new_node = i_front; // Create a temporary node pointer to the front node
		if (i_front == NULL) { // If the queue was empty
			cout << "No elements to dequeue, Queue is empty\n";
			return;
		}
		else { // If the queue was not empty
			i_front = new_node->next; // Update the front pointer to the next node
			delete(new_node); // Delete the old front node
		}
	}

	void print() {
		Node* pt = i_front; // Create a temporary node pointer and initialize it to the front node
		if (i_front == NULL) { // If the queue is empty
			cout << "No elements to print, Queue is empty\n";
			return;
		}

		while (pt != NULL) { // Iterate through each node and print its data
			cout << pt->data << ' ';
			pt = pt->next; // Move to the next node
		}
		cout << '\n';
	}

	bool find(int value, int i_last = INT_MAX, bool is_print = true) {
		Node* pt = i_front; // Create a temporary node pointer and initialize it to the front node
		bool flag = false; // Flag to indicate if the element is found
		int i = 0; // Counter for the current index
		while (pt != NULL && i < i_last) { // Iterate until the end of the queue or until the specified index
			if (pt->data == value) { // If the value is found
				if (is_print)
					cout << "Element is found on index " << i << '\n'; // Print the index if required
				flag = true; // Set the flag to true
			}
			i++; // Increment the index counter
			pt = pt->next; // Move to the next node
		}

		if (!flag) { // If the element is not found
			if (is_print)
				cout << "Element is not found\n"; // Print a message if required
		}
		return flag; // Return the flag indicating if the element is found
	}


	void print_distinct() {
		Node* pt = i_front; // Create a temporary node pointer and initialize it to the front node
		if (i_front == NULL) { // If the queue is empty
			cout << "No elements to print, Queue is empty\n";
			return;
		}
		int i = 0; // Counter for the current index
		while (pt != NULL) { // Iterate through each node in the queue
			if (!find(pt->data, i, 0)) // Check if the current node's data is distinct by searching for it before the current index
				cout << pt->data << ' '; // If it is distinct, print the data
			pt = pt->next; // Move to the next node
			i++; // Increment the index counter
		}
		cout << '\n';
	}
};


int main() {
	// Enqueue some elements
	Queue q1;
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(20);

	// Print the queue
	cout << "Queue: ";
	q1.print(); // Output: Queue: 10 20 30 20

	// Dequeue an element
	q1.dequeue();

	// Print the queue after dequeue
	cout << "Queue after dequeue: ";
	q1.print(); // Output: Queue after dequeue: 20 30 20

	// Search for an element
	q1.find(30); // Output: Element is found on index 1

	// Print distinct elements
	cout << "Distinct elements: ";
	q1.print_distinct(); // Output: Distinct elements: 20 30

	return 0;
}
