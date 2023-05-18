#include <iostream>

// Node class represents a node in the binary search tree
class Node {
public:
    int data; // Value stored in the node
    Node* left; // Pointer to the left child
    Node* right; // Pointer to the right child

    // Constructor
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// BinarySearchTree class represents the binary search tree
class BinarySearchTree {
private:
    Node* root; // Pointer to the root node

    // Helper function for inserting a new node recursively
    Node* insertRecursive(Node* current, int value) {
        if (current == nullptr) {
            // Create a new node if the current node is nullptr
            return new Node(value);
        }

        if (value < current->data) {
            // Recursively insert the value in the left subtree
            current->left = insertRecursive(current->left, value);
        } else if (value > current->data) {
            // Recursively insert the value in the right subtree
            current->right = insertRecursive(current->right, value);
        }

        // Return the current node
        return current;
    }

    // Helper function for searching a value recursively
    bool searchRecursive(Node* current, int value) {
        if (current == nullptr) {
            // Value not found
            return false;
        }

        if (value == current->data) {
            // Value found
            return true;
        }

        if (value < current->data) {
            // Recursively search in the left subtree
            return searchRecursive(current->left, value);
        } else {
            // Recursively search in the right subtree
            return searchRecursive(current->right, value);
        }
    }

public:
    // Constructor
    BinarySearchTree() {
        root = nullptr;
    }

    // Public method to insert a value in the binary search tree
    void insert(int value) {
        root = insertRecursive(root, value);
    }

    // Public method to search for a value in the binary search tree
    bool search(int value) {
        return searchRecursive(root, value);
    }
};

// Main function to test the binary search tree implementation
int main() {
    BinarySearchTree bst;

    // Insert some values
    bst.insert(8);
    bst.insert(3);
    bst.insert(10);
    bst.insert(1);
    bst.insert(6);
    bst.insert(14);
    bst.insert(4);
    bst.insert(7);
    bst.insert(13);

    // Search for values in the tree
    std::cout << bst.search(6) << std::endl; // Output: 1 (true)
    std::cout << bst.search(11) << std::endl; // Output: 0 (false)

    return 0;
}
