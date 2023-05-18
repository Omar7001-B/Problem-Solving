#include <iostream>
using namespace std;

// Node class represents a node in the binary tree
class Node {
private:
    int data;
    Node* left;
    Node* right;

public:
    // Getter and Setter methods for data, left, and right
    int getData() {
        return data;
    }

    void setData(int x) {
        data = x;
    }

    Node* getLeft() {
        return left;
    }

    void setLeft(Node* p) {
        left = p;
    }

    Node* getRight() {
        return right;
    }

    void setRight(Node* p) {
        right = p;
    }
};

// Tree class represents a binary tree
class Tree {
private:
    Node* root;

public:
    // Default constructor - Initializes an empty tree
    Tree() {
        root = nullptr;
    }

    // Initializing constructor - Creates a tree with a single node
    Tree(int x) {
        root = new Node();
        root->setData(x);
        root->setLeft(nullptr);
        root->setRight(nullptr);
    }

    Node* getRoot() {
        return root;
    }

    // Creates a new node with a default value of 0
    Node* newNode() {
        Node* p = new Node();
        p->setData(0);
        p->setLeft(nullptr);
        p->setRight(nullptr);
        return p;
    }

    // Creates a new node with the given value
    Node* newNode(int x) {
        Node* p = new Node();
        p->setData(x);
        p->setLeft(nullptr);
        p->setRight(nullptr);
        return p;
    }

    // Initializes the recursive traversal of the tree
    void traverseTree() {
        if (root != nullptr)
            traverseSubtree(root);
        cout << endl;
    }

    // Recursively traverses the binary tree (inorder)
    void traverseSubtree(Node* p) {
        if (p != nullptr) {
            traverseSubtree(p->getLeft());
            cout << p->getData() << "\n";
            traverseSubtree(p->getRight());
        }
    }

    // Inserts a new node containing x as the left child of p
    void addLeft(Node* p, int x) {
        Node* q = newNode(x);
        p->setLeft(q);
    }

    // Inserts a new node containing x as the right child of p
    void addRight(Node* p, int x) {
        Node* q = newNode(x);
        p->setRight(q);
    }
};

int main() {
    // Create a sample binary tree
    Tree tree(1);
    Node* root = tree.getRoot();

    tree.addLeft(root, 2);
    tree.addRight(root, 3);
    tree.addLeft(root->getLeft(), 4);
    tree.addRight(root->getLeft(), 5);

    // Perform an inorder traversal of the tree
    cout << "Inorder Traversal: ";
    tree.traverseTree();

    return 0;
}
