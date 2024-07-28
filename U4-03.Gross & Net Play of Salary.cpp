#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string emp_id;
    float basic_salary;
public:
    Employee(string n, string id, float salary) : name(n), emp_id(id), basic_salary(salary) {}
    virtual void displayInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << fixed << setprecision(2) << basic_salary << endl;
    }
};

class Pay : public Employee {
private:
    float gross_salary;
    float deductions;
    float net_salary;
public:
    Pay(string n, string id, float salary) : Employee(n, id, salary) {
        calculatePay();
    }
    void calculatePay() {
        
        float allowances = 0.5 * basic_salary; 
        deductions = 0.25 * basic_salary; 
        gross_salary = basic_salary + allowances;
        net_salary = gross_salary - deductions;
    }
    void displayInfo() const override {
        Employee::displayInfo();
        cout << "Gross Salary: " << fixed << setprecision(2) << gross_salary << endl;
        cout << "Deductions: " << fixed << setprecision(2) << deductions << endl;
        cout << "Net Salary: " << fixed << setprecision(2) << net_salary << endl;
    }
};

int main() {
    string name, emp_id;
    float salary;
    
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    getline(cin, emp_id);
    cout << "Enter Employee Salary: ";
    cin >> salary;

    Pay employee(name, emp_id, salary);
    employee.displayInfo();
    
    return 0;
}

