#include <iostream>
using namespace std;

class Shape {
public:
    void setDimensions(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }
    
protected:
    int length, breadth, height;
};

class Rectangle : virtual public Shape {
public:
    int calculateArea() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
public:
    int calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    Cuboid myCuboid;
    int length, breadth, height;
    
    cout << "Enter LENGTH: ";
    cin >> length;
    cout << "Enter BREADTH: ";
    cin >> breadth;
    cout << "Enter HEIGHT: ";
    cin >> height;
    
    myCuboid.setDimensions(length, breadth, height);
    
    cout << "AREA OF RECTANGLE = " << myCuboid.calculateArea() << endl;
    cout << "VOLUME OF CUBOID = " << myCuboid.calculateVolume() << endl;
    
    return 0;
}

