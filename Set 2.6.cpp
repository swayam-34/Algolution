// 6. Given a sorted array A (sorted in ascending order), having N integers, find if there exists any
// pair of elements (A[i], A[j]) such that their sum is equal to X.
// a)Using Naive Approach
// b)Using Two Pointer Technique
// Input: A = [1, 2, 4, 5, 7, 11]
// N = 6
// X = 9
// Expected Output: Yes
// (Explanation: The pair (2, 7) sums to 9.)

#include <iostream>
using namespace std;

bool naiveApproach(int A[], int N, int X) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                return true; 
            }
        }
    }
    return false;  
}

bool twoPointerApproach(int A[], int N, int X) {
    int left = 0;      
    int right = N - 1; 

    while (left < right) {
        int sum = A[left] + A[right];

        if (sum == X) {
            return true;  
        } else if (sum < X) {
            left++;  
        } else {
            right--;  
        }
    }
    return false;  
}

int main() {
    int A[] = {1, 2, 4, 5, 7, 11};
    int N = 6;  
    int X = 9;  
    if (naiveApproach(A, N, X)) {
        cout << "Yes (Naive Approach)" << endl;  s
    } else {
        cout << "No (Naive Approach)" << endl;
    }

    if (twoPointerApproach(A, N, X)) {
        cout << "Yes (Two Pointer Approach)" << endl;  
    } else {
        cout << "No (Two Pointer Approach)" << endl;
    }

    return 0;
}
