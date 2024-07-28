#include <iostream>
using namespace std;

class Input {
protected:
    float x, y;
public:
    void getInput() {
        cout << "Enter value of x: ";
        cin >> x;
        cout << "Enter value of y: ";
        cin >> y;
    }
};

class Sum {
protected:
    float sum;
public:
    void calculateSum(float a, float b) {
        sum = a + b;
    }
};

class Calculate : public Input, public Sum {
public:
    void displayResult() {
        calculateSum(x, y);
        cout << "Sum = " << sum << endl;
    }
};

int main() {
    Calculate calc;
    calc.getInput();
    calc.displayResult();
    return 0;
}

