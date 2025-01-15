#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    int temp;

    temp = a + b + c;

    a = temp;
    b = temp;
    c = temp;

    cout << a << ' ' << b << ' ' << c;
    
    return 0;
}