#include <iostream>
#include <stack>
using namespace std;

void deleteMiddleElement(stack<int>& st) {
    int size = st.size();
    if (size % 2 == 0) {
      cout << "Error";
      exit(0);
    }
    int middle = size / 2;

    
    stack<int> auxStack;

    
    for (int i = 0; i < middle; i++) {
        auxStack.push(st.top());
        st.pop();
    }

    
    st.pop();

    
    while (!auxStack.empty()) {
        st.push(auxStack.top());
        auxStack.pop();
    }
}

void displayStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    int sz;
    stack<int> myStack;
    cout << "Enter number of elements: "; cin >> sz;

    for(int i=0;i<sz;i++){
    myStack.push(i);
    }
    cout << "Original Stack: ";
    displayStack(myStack);

    // Delete the middle element
    deleteMiddleElement(myStack);

    cout << "Stack after deleting the middle element: ";
    displayStack(myStack);

    return 0;
}
