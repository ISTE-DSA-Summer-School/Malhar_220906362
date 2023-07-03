#include <iostream>

int main() {
    // Write C++ code here
    int a, b, ans;
    char ch;
    std::cout << "Enter expresion\t";
    scanf("%d%c%d", &a, &ch, &b);
    switch(ch)
    {
        case '+':
        ans = a+b;
        break;
        
        case '-':
        ans = a-b;
        break;
        
        case '*':
        ans = a*b;
        break;
        
        case '/':
        ans = a/b;
        break;
        
        case '%':
        ans = a%b;
        break;
    }
    printf("%d", ans);

    return 0;
}
