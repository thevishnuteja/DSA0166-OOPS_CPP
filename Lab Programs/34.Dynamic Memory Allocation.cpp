#include <iostream>
using namespace std;

struct node {
    int data;
    node *link;
};

class stack {
private:
    node *top;
public:
    stack() {
        top = NULL;
    }

    void push(int item) {
        node *temp = new node;
        if (temp == NULL) {
            cout << endl << "Memory allocation failed";
            return;
        }
        temp->data = item;
        temp->link = top;
        top = temp;
    }

    int pop() {
        if (top == NULL) {
            cout << endl << "Stack is empty";
            return -1; // or any other sentinel value
        }
        node *temp = top;
        int item = temp->data;
        top = top->link;
        delete temp;
        return item;
    }

    ~stack() {
        while (top != NULL) {
            node *temp = top;
            top = top->link;
            delete temp;
        }
    }
};

int main() {
    stack s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    int i = s.pop();
    cout << endl << "Item popped=" << i;
    i = s.pop();
    cout << endl << "Item popped=" << i;
    i = s.pop();
    cout << endl << "Item popped=" << i;

    return 0;
}

