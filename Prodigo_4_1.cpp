#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum = " << num1 + num2 << endl;
    cout << "Difference = " << num1 - num2 << endl;
    cout << "Product = " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Remainder = " << num1 % num2 << endl;
        cout << "Quotient = " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Remainder and quotient cannot be computed (division by zero)." << endl;
    }

    return 0;
}
