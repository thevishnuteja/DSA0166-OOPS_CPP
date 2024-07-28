#include <iostream>
using namespace std;

class CubeCalculator {
public:
    int number;

    CubeCalculator() {
        number = 0;
    }

    CubeCalculator(int num) {
        number = num;
    }

    void displayCube() {
        cout << "Cube of " << number << " is " << number * number * number << endl;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        CubeCalculator cube(i);
        cube.displayCube();
    }

    return 0;
}

