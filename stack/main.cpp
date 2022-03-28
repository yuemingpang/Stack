#include "Stack.cpp"
#include <iostream>
using namespace std;


int main() {
  bool run = true;
  
  do {
    cout << "The stack is created!" << endl;
    Stack<int>* s = new Stack<int>();
    cout << "Here are the operations you can do: \n 1.push \n 2.pop \n 3.top \n 4.purge \n 5.empty \n 6.display" << endl;
    int x;
    cin >> x;
    switch(x) {
      case 1:
        int n;
        cout << "type a number to push" << endl;
        cin >> n;
        s -> push(n);
        break;
      case 2:
        s -> pop();
        break;
      case 3:
        cout << "The data on the top right now is:" << s -> top() << endl;
        break;
      case 4:
        cout << "The stack is cleared!" << endl;
        s -> purge();
        break;
      case 5:
        bool empty = s -> isEmpty(); 
        if (empty) {
          cout << "The stack is empty!" << endl;
        } else {
          cout << "The stack is not empty!" << endl;
        }
        break;
      case 6:
        s -> display();
        break;
    }
  } while (run);
  

}

