#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string& username1, const string& username2) {
    return username1 == username2;
}

int main() {
    string username1, username2;

    cout << "Enter the user name: ";
    getline(cin, username1);
    cout << "Reenter the user name: ";
    getline(cin, username2);

    if (isValidUsername(username1, username2)) {
        cout << "User name is Valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }

    return 0;
}

