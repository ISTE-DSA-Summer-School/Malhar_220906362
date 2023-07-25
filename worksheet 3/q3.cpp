#include <iostream>
using namespace std;


int main() {
    int num1, num2, num3, greatest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;

     int greatest = *num1;

    if (*num2 > greatest) {
        greatest = *num2;
    }

    if (*num3 > greatest) {
        greatest = *num3;
    }

   

    cout << "The greatest of the three numbers is: " << greatest << endl;

    return 0;
}
