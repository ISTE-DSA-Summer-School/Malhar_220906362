#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverse(string input) {
    stack<char> charStack;
    string reversedString;

    
    for (char c : input) {
        charStack.push(c);
    }

    
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    string reversedString = reverse(inputString);

    cout << "Reversed string: " << reversedString << endl;

    return 0;
}
