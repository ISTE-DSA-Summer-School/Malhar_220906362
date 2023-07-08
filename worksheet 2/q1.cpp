#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
    char str[100], abc[]= "mango", str1[100];
    int l, m;
    cout << "Enter string "; cin >> str;
    l = strlen(str); cout << l;
    m = strcmp(str,abc); cout << m;
    strcat(str, abc);
    cout << str;
    strcpy(str1, str); cout << str1;
   
    return 0;
}    
   
