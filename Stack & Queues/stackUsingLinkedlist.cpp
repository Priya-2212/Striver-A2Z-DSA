//Implementation of stack using linked list

#include<iostream>
using namespace std;

struct stackNode {
  int data;
  stackNode * next;
  int size;
  stackNode(int d) {
    data = d;
    next = NULL;
  }
};

struct stack {
  stackNode * top;
  int size;
  stack() {
    top = NULL;
    size = 0;
  }

  //push
  void stackPush(int x) {
    stackNode * element = new stackNode(x);
    element -> next = top;
    top = element;
    cout << "Element pushed" << "\n";
    size++;
  }

  //pop
  int stackPop() {
    if (top == NULL) {
      return -1;
    }
    int topData = top -> data;
    stackNode * temp = top;
    top = top -> next;
    delete temp;
    size--;
    return topData;
  }

  //size
  int stackSize() {
    return size;
  }


  bool stackIsEmpty() {
    return top == NULL;
  }

  //top
  int stackPeek() {
    if (top == NULL) return -1;
    return top -> data;
  }


  void printStack() {
    stackNode * current = top;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
  }
};
int main() {

  stack s;

  s.stackPush(10);

  cout << "Element popped: " << s.stackPop() << "\n";
  cout << "Stack size: " << s.stackSize() << "\n";
  cout <<"Stack empty or not? "<<s.stackIsEmpty()<<"\n";
  cout << "stack's top element: " << s.stackPeek() << "\n";
  
  return 0;
}

//time complexity: O(1)
//space complexity: O(N)
