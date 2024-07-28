#include <iostream>
using namespace std;

class TrianglePattern {
public:
    int rows;

    TrianglePattern() {
        rows = 0;
    }

    TrianglePattern(int r) {
        rows = r;
    }

    void printPattern() const {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    TrianglePattern pattern(n);
    pattern.printPattern();

    return 0;
}

