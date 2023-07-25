#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool compare(string s, string t) {
    stack<char> stackS, stackT;

    
    for (char c : s) {
        if (c != '#') {
            stackS.push(c);
        } else if (!stackS.empty()) {
            stackS.pop();
        }
    }

    
    for (char c : t) {
        if (c != '#') {
            stackT.push(c);
        } else if (!stackT.empty()) {
            stackT.pop();
        }
    }

    
    return stackS == stackT;
}

int main() {
    string s, t;

    cout << "Enter the first string: ";
    cin >> s;

    cout << "Enter the second string: ";
    cin >> t;

    if (compare(s, t)) {
        cout << "The strings are equal" << endl;
    } else {
        cout << "The strings are NOT equal" << endl;
    }

    return 0;
}
