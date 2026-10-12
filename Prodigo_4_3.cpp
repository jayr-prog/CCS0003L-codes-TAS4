#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double a, b, angleC;

    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter angle C (in degrees): ";
    cin >> angleC;

    double radians = angleC * PI / 180;
    double c = sqrt(a * a + b * b - 2 * a * b * cos(radians));

    cout << "Side c = " << c << endl;

    return 0;
}
