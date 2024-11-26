// 3. Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element.
// Solve it without sorting.
// Example:
// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5

#include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
	int inversionCount = 0;  

	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[i] > arr[j]) {
				inversionCount++;  
			}
		}
	}

	return inversionCount;  
}

int main() {
	int arr[] = {7, 2, 6, 3};  
	int n = sizeof(arr) / sizeof(arr[0]);  

	int result = countInversions(arr, n);
	cout << "The number of inversions is: " << result << endl; 

	return 0;
}
