#include <iostream>
using namespace std;

int main() {
    int number, bitPosition;
    
    cout << "Enter Number: ";
    cin >> number;
    
    cout << "Enter bit number you wish to set: ";
    cin >> bitPosition;
    
    if (bitPosition < 0 || bitPosition > 31) {  
        cout << "Invalid bit position" << endl;
    } else {
        number |= (1 << bitPosition);  
        cout << "Bit set successfully" << endl;
        cout << "Answer: " << number << endl;
    }

    return 0;
}

