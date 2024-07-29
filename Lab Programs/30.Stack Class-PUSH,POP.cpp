#include <iostream>
#define MAX 10

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() : top(-1) {}

    void push(int item) {
        if (top == MAX - 1) {
            std::cout << "Stack is full\n";
            return;
        }
        arr[++top] = item;
    }

    int pop() {
        if (top == -1) {
            std::cout << "Stack is empty\n";
            return -1; // Use -1 to indicate the stack is empty
        }
        return arr[top--];
    }
};

int main() {
    Stack s;

    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.push(17);
    s.push(18);
    s.push(19);
    s.push(20);
    s.push(21);

    for (int i = 0; i < 4; ++i) {
        int item = s.pop();
        if (item != -1) {
            std::cout << "Item popped = " << item << std::endl;
        }
    }

    return 0;
}

