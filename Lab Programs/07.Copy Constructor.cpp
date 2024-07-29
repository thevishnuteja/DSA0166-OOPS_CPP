#include <iostream>
using namespace std;

class code {
    int id;

public:
    code() {}
    code(int a) {
        id = a;
    }
    code(const code &x) {
        id = x.id;
    }
    void display() {
        cout << id << endl;
    }
};

int main() {
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;

    cout << "id of A: ";
    A.display();
    cout << "id of B: ";
    B.display();
    cout << "id of C: ";
    C.display();
    cout << "id of D: ";
    D.display();

    return 0;
}

