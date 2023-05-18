#include <iostream>

// Node class represents a single node in the doubly linked list
class Node {
public:
    double data;     // Data stored in the node
    Node* prev;      // Pointer to the previous node
    Node* next;      // Pointer to the next node

    Node(double value) : data(value), prev(nullptr), next(nullptr) {}
};


class List { // List class represents the doubly linked list
public:
    List() : head(nullptr) {}
    
    ~List() { // Destructor to free the memory allocated for the nodes
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    
    bool IsEmpty() { // Checks if the list is empty
        return head == nullptr;
    }

    // Inserts a new node with data 'x' at the given 'index'
    // Returns a pointer to the newly inserted node, or nullptr if index is invalid
    Node* InsertNode(int index, double x) {
        if (index < 0)
            return nullptr;

        Node* newNode = new Node(x);

        if (index == 0) {
            // Inserting at the beginning of the list
            newNode->next = head;
            if (head != nullptr)
                head->prev = newNode;
            head = newNode;
        }
        else {
            Node* prevNode = GetNode(index - 1);
            if (prevNode == nullptr) {
                delete newNode;
                return nullptr;
            }

            newNode->next = prevNode->next;
            if (newNode->next != nullptr)
                newNode->next->prev = newNode;
            prevNode->next = newNode;
            newNode->prev = prevNode;
        }

        return newNode;
    }

    // Finds the index of the first occurrence of a node with data 'x'
    // Returns the index if found, -1 if not found
    int FindNode(double x) {
        int index = 0;
        Node* current = head;

        while (current != nullptr) {
            if (current->data == x)
                return index;

            current = current->next;
            index++;
        }

        return -1;  // Node not found
    }

    // Deletes the first occurrence of a node with data 'x'
    // Returns the index of the deleted node if found, -1 if not found
    int DeleteNode(double x) {
        Node* current = head;
        int index = 0;

        while (current != nullptr) {
            if (current->data == x) {
                if (current->prev != nullptr)
                    current->prev->next = current->next;
                else
                    head = current->next;

                if (current->next != nullptr)
                    current->next->prev = current->prev;

                delete current;
                return index;
            }

            current = current->next;
            index++;
        }

        return -1;  // Node not found
    }

    // Displays the elements of the list
    void DisplayList() {
        Node* current = head;

        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << std::endl;
    }

private:
    Node* head;   // Pointer to the first node in the list

    // Retrieves the node at the given 'index'
    // Returns a pointer
    // Retrieves the node at the given 'index'
    // Returns a pointer to the node if found, nullptr if index is invalid
    Node* GetNode(int index) {
        if (index < 0)
            return nullptr;

        Node* current = head;
        int count = 0;

        while (current != nullptr) {
            if (count == index)
                return current;

            current = current->next;
            count++;
        }

        return nullptr;  // Index out of range
    }
};

int main() {
    // Create a new doubly linked list
    List myList;

    // Insert nodes into the list
    myList.InsertNode(0, 5.0);       // Insert at the beginning
    myList.InsertNode(1, 7.5);       // Insert at index 1
    myList.InsertNode(2, 10.2);      // Insert at index 2
    myList.InsertNode(0, 2.3);       // Insert at the beginning again

    // Display the list
    std::cout << "List elements: ";
    myList.DisplayList();   // Output: 2.3 5.0 7.5 10.2

    // Search for a node
    double searchData = 7.5;
    int searchIndex = myList.FindNode(searchData);
    if (searchIndex != -1) {
        std::cout << searchData << " found at index " << searchIndex << std::endl;
    }
    else {
        std::cout << searchData << " not found in the list" << std::endl;
    }

    // Delete a node
    double deleteData = 5.0;
    int deleteIndex = myList.DeleteNode(deleteData);
    if (deleteIndex != -1) {
        std::cout << "Deleted " << deleteData << " from index " << deleteIndex << std::endl;
    }
    else {
        std::cout << deleteData << " not found in the list" << std::endl;
    }

    // Display the updated list
    std::cout << "Updated list: ";
    myList.DisplayList();   // Output: 2.3 7.5 10.2

    // Check if the list is empty
    if (myList.IsEmpty()) {
        std::cout << "The list is empty" << std::endl;
    }
    else {
        std::cout << "The list is not empty" << std::endl;
    }

    return 0;
}

