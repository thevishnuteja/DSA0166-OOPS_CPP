#include <iostream>
using namespace std;

class Number {
protected:
    float number;
public:
    void setNumber(float num) {
        number = num;
    }
};

class Square : public Number {
public:
    void calculateSquare() {
        cout << "Square of " << number << " is: " << number * number << endl;
    }
};

class Cube : public Number {
public:
    void calculateCube() {
        cout << "Cube of " << number << " is: " << number * number * number << endl;
    }
};

int main() {
    float num;
    
    Square sq;
    cout << "Enter an integer number: ";
    cin >> num;
    sq.setNumber(num);
    sq.calculateSquare();
    
    Cube cu;
    cout << "Enter an integer number: ";
    cin >> num;
    cu.setNumber(num);
    cu.calculateCube();
    
    return 0;
}

