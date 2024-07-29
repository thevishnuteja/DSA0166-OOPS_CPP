#include <iostream>
#define MAX 10

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    void add(int item) {
        if ((rear == MAX - 1 && front == 0) || (rear + 1 == front)) {
            std::cout << "Queue is full\n";
            return;
        }
        if (rear == MAX - 1)
            rear = 0;
        else
            rear++;
        arr[rear] = item;
        if (front == -1)
            front = 0;
    }

    int del() {
        if (front == -1) {
            std::cout << "Queue is empty\n";
            return -1; // Use -1 to indicate the queue is empty
        }
        int data = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == MAX - 1) {
            front = 0;
        } else {
            front++;
        }
        return data;
    }
};

int main() {
    Queue q;
    q.add(11);
    q.add(12);
    q.add(13);
    q.add(14);
    q.add(15);
    q.add(16);
    q.add(17);
    q.add(18);
    q.add(19);
    q.add(20);
    q.add(21);

    for (int i = 0; i < 3; ++i) {
        int item = q.del();
        if (item != -1) {
            std::cout << "Item deleted = " << item << std::endl;
        }
    }

    return 0;
}

