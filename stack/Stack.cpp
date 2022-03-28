#include <iostream>
using namespace std;

template <typename T>

class Stack {

  struct Node {
    T data;
    Node* next;
  };

  Node* head = NULL;
  int size = 0;

  public:
  void push(T data) {
    Node* newNode = new Node();
    newNode -> data = data;

    if (size == 0) {
      head = newNode;
      newNode -> next = NULL;
      size ++;
    } else {
      newNode -> next = head;
      head = newNode;
      size ++;
    }
  }

  void pop() {
    if (size > 0) {
      head = head -> next;
      size --;
    } else {
      cout << "Underflow" << endl;
    }
  }

  T top() {
    if (size > 0) {
      return head -> data;
    } else {
      cout << "Underflow" << endl;
    }
  }

  void purge() {
    head = NULL;
    size = 0;
    cout << "stack has been cleared!" << endl;
  }

  bool isEmpty() {
    if (size == 0) {
      return true;
    }
    return false;
  }

  void display(){
    if (size == 0) {
      cout << "The stack is empty!" << endl;
    } else {
      cout << "Top <- ";
      Node* curr = head;
      while (!curr) {
        cout << curr-> data << " <- ";
        curr = curr -> next;
      }
      cout << "\n";
    }
  }

};