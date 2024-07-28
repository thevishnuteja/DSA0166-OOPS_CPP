#include <iostream>
using namespace std;

class AddAmount {
private:
    double amount;
public:
    AddAmount() : amount(50) {}

    AddAmount(double addedAmount) : amount(50 + addedAmount) {}

    void display() const {
        cout << amount << endl;
    }
};

int main() {
    double additionalAmount;

    AddAmount piggyBank1;
    piggyBank1.display();

    cin >> additionalAmount;
    
    AddAmount piggyBank2(additionalAmount);
    piggyBank2.display();

    return 0;
}

