//Implemenatation of stack using array 

#include<iostream>
using namespace std;


class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }

  //Push
  void push(int x) {
    top++;
    arr[top] = x;
  }

  //Pop
  int pop() {
    int x = arr[top];
    top--;
    return x;
  }

  //Top
  int Top() {
    return arr[top];
  }

  //Size
  int Size() {
    return top + 1;
  }
};

int main() {

  Stack s;

  s.push(6);
  s.push(3);
  s.push(7);

  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  
  return 0;
}

//time complexity: O(1)
//space complexity: O(N)
