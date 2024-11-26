// 6. Program to search a number in an array and return the first occurrence.
#include <iostream>
using namespace std;

int main() {
    int n, searchNumber, index = -1;

    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> searchNumber;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNumber) {
            index = i;
            break;
        }
    }

    cout << "Index of first occurrence: " << index << endl;

    return 0;
}
