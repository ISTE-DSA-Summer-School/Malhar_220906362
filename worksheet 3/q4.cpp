#include <iostream>
using namespace std;
    

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int* ptr = &number;

    if (*number < 0) {
        *number = -*number;
    }

    int reversed = 0;
    int temp = *number;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    *number = reversed;


   
    cout << "Number with reversed digits: " << number << endl;

    return 0;
}
