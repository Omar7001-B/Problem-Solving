#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q(5);
    cout << "Hello, World!" << endl;
    cout << "Is queue empty? " << q.empty() << "\n";
    cout << "Size of queue: " << q.size() << "\n\n";

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Is queue empty? " << q.empty() << "\n";
    cout << "Size of queue: " << q.size() << "\n";

    while(!q.empty()) {
        cout << "Front of queue: " << q.front() << "\n";
        q.pop();
    }
    cout << "Is queue empty? " << q.empty() << "\n";
    return 0;
}
