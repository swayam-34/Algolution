// 7. Program to print all unique numbers in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique numbers in the array:" << endl;
    bool foundUnique = false;

    
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
            foundUnique = true;
        }
    }

    if (!foundUnique) {
        cout << "No unique numbers found." << endl;
    }

    cout << endl;

    return 0;
}
