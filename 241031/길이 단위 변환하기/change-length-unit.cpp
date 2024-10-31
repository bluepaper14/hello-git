#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double a = 30.48;
    double b = 160934;
    double c, d;

    c = a * 9.2;
    d = b * 1.3;

    cout.precision(1);

    cout << "9.2ft" << " = " << c << "cm" << endl;
    cout << "1.3mi" << " = " << d << "cm" << endl;

    
    return 0;
}