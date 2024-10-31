#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int a = 13;
    double b = 0.165000;
    double c = 13 * 0.165000;
    cout.precision(6);
    cout << a << " * " << b << " = " << c << endl;
    
    return 0;
}