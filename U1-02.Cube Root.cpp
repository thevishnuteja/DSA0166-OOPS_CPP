#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number, result;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        result = cbrt(number);
        cout << "The cube root of " << number << " is " << result << endl;
    } else {
        result = cbrt(number);
        cout << "The cube root of " << number << " is " << result << endl;
    }

    return 0;
}

