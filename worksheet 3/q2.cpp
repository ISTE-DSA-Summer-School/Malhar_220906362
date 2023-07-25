#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers to swap: ";
    cin >> a >> b;

   
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Numbers after swapping: " << a << " " << b << endl;

    return 0;
}
