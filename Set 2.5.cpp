// 5. Given an array arr[] of size n, return an equilibrium index (if any) or -1 if no equilibrium index
// exists. The equilibrium index of an array is an index such that the sum of elements at lower
// indexes equals the sum of elements at higher indexes.
// Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.
// Examples:
// Input: arr[] = {-7, 1, 5, 2, -4, 3, 0}
// Output: 4
// Explanation: In 1-based indexing, 4 is an equilibrium index, because:
// arr[1] + arr[2] + arr[3] = arr[5] + arr[6] + arr[7]
// Input: arr[] = {1, 2, 3}
// Output: -1
// Explanation: There is no equilibrium index in the array.
// Input:arr = {1, 3, 5, 2, 2}
// Expected Output:2
// Explanation: At index 2, the sum of elements on the left (1 + 3 = 4) is equal to the sum of
// elements on the right (2 + 2 = 4).

#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int left_sum = 0; 

    for (int i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum - arr[i];

        if (left_sum == right_sum) {
            return i + 1; 
        }

        left_sum += arr[i];
    }

    return -1;
}

int main() {
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr2[] = {1, 2, 3};
    int arr3[] = {1, 3, 5, 2, 2};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Equilibrium index for arr1: " << findEquilibriumIndex(arr1, n1) << endl;
    cout << "Equilibrium index for arr2: " << findEquilibriumIndex(arr2, n2) << endl;
    cout << "Equilibrium index for arr3: " << findEquilibriumIndex(arr3, n3) << endl;

    return 0;
}
