#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp = a;
    int temp2 = b;
    int temp3 = c;

     /*
     b -> a
     c -> b
     a -> c
     */

     b = temp;
     c = temp2;
     a = temp3;
     
     cout << a << '\n';
     cout << b << '\n';
     cout << c << '\n';




    return 0;
}