// 9. Program to count total number of duplicate numbers in an array.
#include <iostream>
#include <unordered_map>
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

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    int duplicateCount = 0;
    for (const auto& pair : frequency) {
        if (pair.second > 1) {
            duplicateCount++;
        }
    }

    cout << "Total number of duplicate numbers: " << duplicateCount << endl;

    return 0;
}
