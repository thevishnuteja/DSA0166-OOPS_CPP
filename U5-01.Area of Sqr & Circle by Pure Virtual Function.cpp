#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

// Abstract class
class Shape {
public:
    virtual float calculateArea() const = 0; // Pure virtual function
};

// Derived class for Square
class Square : public Shape {
private:
    float length;
public:
    Square(float l) : length(l) {}
    float calculateArea() const override {
        return length * length;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float calculateArea() const override {
        return PI * radius * radius;
    }
};

int main() {
    float radius, length;
    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    
    cout << "Enter the length of the square: ";
    cin >> length;
    Square square(length);
    
    cout << "Area of square: " << square.calculateArea() << endl;
    cout << "Area of circle: " << circle.calculateArea() << endl;
    
    return 0;
}

