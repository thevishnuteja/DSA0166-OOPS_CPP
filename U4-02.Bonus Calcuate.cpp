#include <iostream>
#include <iomanip>
using namespace std;

class Person {
protected:
    float salary;
public:
    virtual void getData() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    virtual void displayData() {
        cout << "Salary: " << fixed << setprecision(2) << salary << endl;
    }
    virtual float calculateBonus() = 0; 
};

class Admin : virtual public Person {
public:
    void getData() override {
        Person::getData();
    }
    void displayData() override {
        Person::displayData();
    }
};

class Account : virtual public Person {
public:
    void getData() override {
        Person::getData();
    }
    void displayData() override {
        Person::displayData();
    }
};

class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData(); 
    }
    void displayData() override {
        Admin::displayData(); 
    }
    float calculateBonus() override {
        return salary * 1.10; 
    }
};

int main() {
    Master emp;
    emp.getData();
    emp.displayData();
    cout << "Bonus: " << fixed << setprecision(2) << emp.calculateBonus() << endl;
    return 0;
}

