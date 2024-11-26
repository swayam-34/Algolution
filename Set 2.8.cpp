// 8. Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’
// consecutive elements in the array(Using Sliding Window Technique)
// Input : arr[] = {100, 200, 300, 400}, k = 2
// Output : 700
// Input : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4
// Output : 39
// We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.
// Input : arr[] = {2, 3}, k = 3
// Output : Invalid
// There is no subarray of size 3 as size of whole array is 2.

#include <iostream>
using namespace std;

void findMaxSum(int arr[], int n, int k) {
    if (k > n) {
        cout << "Invalid" << endl;
        return;
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];  
        max_sum = max(max_sum, current_sum);  
    }

    cout << max_sum << endl;
}

int main() {
    int arr1[] = {100, 200, 300, 400};
    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int arr3[] = {2, 3};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    int k = 2; 
    cout << "Max sum for arr1 with k = 2: ";
    findMaxSum(arr1, n1, k);
    k = 4; 
    cout << "Max sum for arr2 with k = 4: ";
    findMaxSum(arr2, n2, k);
    k = 3; 
    cout << "Max sum for arr3 with k = 3: ";
    findMaxSum(arr3, n3, k);

    return 0;
}
