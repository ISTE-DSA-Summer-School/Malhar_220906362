#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Bracket(string s) {
    stack<char> bracketStack;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            bracketStack.push(c);
        } else {
            if (bracketStack.empty()) {
                return false;
            }

            char top = bracketStack.top();
            bracketStack.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return bracketStack.empty();
}

int main() {
    string inputString;

    cout << "Enter a string with brackets: ";
    cin >> inputString;

    if (Bracket(inputString)) {
        cout << "The input string is valid." << endl;
    } else {
        cout << "The input string is NOT valid." << endl;
    }

    return 0;
}
