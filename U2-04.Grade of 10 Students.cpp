#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int regNo;
    int mark1, mark2, mark3;
    float average;
    char grade;

    void readData() {
        cout << "ENTER THE STUDENT NAME =>";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER =>";
        cin >> regNo;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }

    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }

    void calculateGrade() {
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

    void displayData() {
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << "GRADE => " << grade << endl;
    }
};

int main() {
    int numStudents;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES =>";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        students[i].readData();
        students[i].calculateAverage();
        students[i].calculateGrade();
        students[i].displayData();
    }

    return 0;
}

