#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1; 

    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;

    for(int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << "Sample Output: " << result << endl;

    return 0;
}

