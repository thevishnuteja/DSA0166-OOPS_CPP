#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i = 52;
    float a = 425.0;
    float b = 123.500328;
    char str[] = "Dream. Then make it happen!";

    cout.setf(ios::showpos);
    cout << i << endl;

    cout.setf(ios::showbase);
    cout.setf(ios::uppercase);
    cout.setf(ios::hex, ios::basefield);
    cout << i << endl;

    cout.setf(ios::oct, ios::basefield);
    cout << i << endl;

    cout.fill('0');
    cout << "Fill character " << cout.fill() << endl;

    cout.setf(ios::dec, ios::basefield);
    cout.width(10);
    cout << i << endl;

    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout << i << endl;

    cout.setf(ios::internal, ios::adjustfield);
    cout.width(10);
    cout << i << endl;

    cout << endl;
    cout.width(10);
    cout << str << endl;

    cout.width(40);
    cout.setf(ios::left, ios::adjustfield);
    cout.width(40);
    cout << str << endl;

    cout.precision(6);
    cout << "Precision " << cout.precision() << endl;

    cout.setf(ios::showpoint);
    cout.unsetf(ios::showpos);
    cout << endl << a;

    cout.unsetf(ios::showpoint);
    cout << endl << a;

    cout.setf(ios::fixed, ios::floatfield);
    cout << endl << b;

    cout.setf(ios::scientific, ios::floatfield);
    cout << endl << b;

    b = 5.375;
    cout.precision(14);

    cout.setf(ios::fixed, ios::floatfield);
    cout << endl << b;

    cout.setf(ios::scientific, ios::floatfield);
    cout << endl << b;

    return 0;
}

