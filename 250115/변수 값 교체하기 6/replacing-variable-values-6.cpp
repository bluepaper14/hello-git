#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 5;
    int temp;

    temp = 2;
    a = b;
    b = temp;

    cout << a << '\n';
    cout << b;

    return 0;
}