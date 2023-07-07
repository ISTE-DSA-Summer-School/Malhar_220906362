#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    char str[20], temp;
    int i, j;
    cout << "enter string "; cin >> str;
    for (i=0; str[i]; i++)
    {
        j++;
    }
    for (i=0;i<j/2;i++)
    {
        swap(str[i],str[j-i-1]);
    }
    cout<<"\nAfter reversing string "<<str;
    return 0;
}
