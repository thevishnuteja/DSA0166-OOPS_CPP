#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Area {
public:
    Area(double radius = 0) {
        if (radius > 0) {
            double area = PI * radius * radius;
            cout << "Area of Circle: " << area << endl;
        }
    }

    Area(double length, double breadth) {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }

    Area(double base, double height, bool isTriangle) {
        if (isTriangle) {
            double area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
        }
    }
};

int main() {
    double radius, length, breadth, base, height;

    cout << "Enter the radius of the Circle: ";
    cin >> radius;
    Area circle(radius);

    cout << "Enter the length and breadth of the Rectangle: ";
    cin >> length >> breadth;
    Area rectangle(length, breadth);

    cout << "Enter the base and height of the Triangle: ";
    cin >> base >> height;
    Area triangle(base, height, true);

    return 0;
}

