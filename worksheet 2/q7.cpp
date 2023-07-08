#include <iostream>
#include <cstring>
using namespace std;
int main() {
    // Write C++ code here
    char str[20], temp;
    int i, j;
    cout << "enter string "; cin >> str;
    j=strlen(str);
    for(i=0;i<=j;i++){
    if(str[i]>='a'&& str[i]<='z'){
        str[i]=str[i]-32;
    }
    }
    cout << str;
    return 0;
}    
