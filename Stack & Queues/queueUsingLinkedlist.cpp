//implementation of queue using linked list

#include <iostream>
using namespace std;

// Node class representing a single element in the queue
class Node {
public:
    int val;
    Node *next;
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

class Queue {
private:
    Node *start, *end;
    int size;
    
public:
    Queue() {
        start = end = nullptr;
        size = 0;
    }

    bool Empty();
    void Enqueue(int value);
    void Dequeue();
    int Peek();
    int getSize();
};

// check if the queue is empty
bool Queue::Empty() {
    return start == nullptr;
}

// return the front element of the queue
int Queue::Peek() {
    if (Empty()) {
        cout << "Queue is Empty" << endl;
        return -1;
    } 
    return start->val;
}

//  insert an element into the queue
void Queue::Enqueue(int value) {
    Node *temp = new Node(value);
    if (!temp) {  // When heap memory is exhausted
        cout << "Queue is Full" << endl;
        return;
    }

    if (start == nullptr) {  // First element
        start = end = temp;
    } else {
        end->next = temp;
        end = temp;
    }
    cout << value << " Inserted into Queue" << endl;
    size++;
}

//  remove an element from the front of the queue
void Queue::Dequeue() {
    if (start == nullptr) {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << start->val << " Removed From Queue" << endl;
    Node *temp = start;
    start = start->next;
    delete temp;
    size--;

    if (start == nullptr) { // If queue becomes empty
        end = nullptr;
    }
}

// get the current size of the queue
int Queue::getSize() {
    return size;
}

int main() {
    Queue Q;

    Q.Enqueue(10);
    Q.Enqueue(20);
    Q.Enqueue(30);
    Q.Enqueue(40);
    Q.Enqueue(50);
    Q.Dequeue();

    cout << "The size of the Queue is " << Q.getSize() << endl;
    cout << "The Peek element of the Queue is " << Q.Peek() << endl;

    return 0;
}

//time complexity: O(1)
