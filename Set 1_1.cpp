// 1. Program to count total number of negative numbers in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int negativeCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Total number of negative numbers in the array: " << negativeCount << endl;

    return 0;
}
