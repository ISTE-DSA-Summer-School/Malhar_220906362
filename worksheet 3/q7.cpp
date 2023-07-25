#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int length) {
    if (length == 0 || length == 1) {
        return length;
    }

    int uniquePointer = 0, count = 0;
    for (int current = 1; current < length; current++) {
        if (arr[current] != arr[uniquePointer]) {
            uniquePointer++;
            arr[uniquePointer] = arr[current];
            count+=1;
        }
    }

    return uniquePointer + 1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, length);

    

    cout << "New length of array: " << lenght - count << endl;

    return 0;
}
