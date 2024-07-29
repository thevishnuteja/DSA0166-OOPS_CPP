#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Employee {
    int id;
    string name;
    string position;
};
void addEmployee(const Employee& emp) {
    ofstream file("employees.dat", ios::app | ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(&emp), sizeof(Employee));
        file.close();
        cout << "Employee added successfully." << endl;
    } else {
        cerr << "Error opening file for writing." << endl;
    }
}
void viewEmployees() {
    ifstream file("employees.dat", ios::in | ios::binary);
    if (file.is_open()) {
        Employee emp;
        while (file.read(reinterpret_cast<char*>(&emp), sizeof(Employee))) {
            cout << "ID: " << emp.id << ", Name: " << emp.name << ", Position: " << emp.position << endl;
        }
        file.close();
    } else {
        cerr << "Error opening file for reading." << endl;
    }
}
void searchEmployee(int id) {
    ifstream file("employees.dat", ios::in | ios::binary);
    if (file.is_open()) {
        Employee emp;
        bool found = false;
        while (file.read(reinterpret_cast<char*>(&emp), sizeof(Employee))) {
            if (emp.id == id) {
                cout << "ID: " << emp.id << ", Name: " << emp.name << ", Position: " << emp.position << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Employee with ID " << id << " not found." << endl;
        }
        file.close();
    } else {
        cerr << "Error opening file for reading." << endl;
    }
}
int main() {
    int choice;
    do {
        cout << "Employee Database" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. View All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Employee emp;
                cout << "Enter Employee ID: ";
                cin >> emp.id;
                cin.ignore();  // Clear the newline character from the input buffer
                cout << "Enter Employee Name: ";
                getline(cin, emp.name);
                cout << "Enter Employee Position: ";
                getline(cin, emp.position);
                addEmployee(emp);
                break;
            }
            case 2:
                viewEmployees();
                break;
            case 3: {
                int id;
                cout << "Enter Employee ID to search: ";
                cin >> id;
                searchEmployee(id);
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
