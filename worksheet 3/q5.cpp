#include <iostream>
using namespace std;


int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int* ptr = &number;

     int factorial = 1;
    int n = *number;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

   cout << "Factorial is : " << number << endl;

    return 0;
}
