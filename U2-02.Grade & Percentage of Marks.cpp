#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float average, percentage;
    char grade;

    cout << "Please Enter the marks of five subjects:\n";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    cout << "Total Marks      = " << total << endl;
    cout << "Average Marks    = " << average << endl;
    cout << "Marks Percentage = " << percentage << "%" << endl;

    if (percentage >= 75) {
        grade = 'A'; 
    } else if (percentage >= 60 && percentage < 75) {
        grade = 'B'; 
    } else if (percentage >= 50 && percentage < 60) {
        grade = 'C'; 
    } else if (percentage >= 40 && percentage < 50) {
        grade = 'D'; 
    } else {
        grade = 'F'; 
    }

    cout << "Grade = " << grade << endl;

    return 0;
}

