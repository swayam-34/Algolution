// 10. Given an integer array, find the maximum length subarray having a given sum.(USE
// HASHMAP Concept)
// Input:nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }target = 8
// Output:{ -5, 5, 3, 5 }
// Subarrays with sum 8 are { -5, 5, 3, 5 },{ 3, 5 },{ 5, 3 }
// The longest subarray is { -5, 5, 3, 5 } having length 4.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> longestSubarrayWithSum(vector<int>& nums, int target) {
    unordered_map<int, int> sumMap;  
    vector<int> result; 
    int cumulativeSum = 0;  
    int maxLength = 0;  
    int startIndex = -1;
   
    for (int i = 0; i < nums.size(); i++) {
        cumulativeSum += nums[i]; 
      
        if (cumulativeSum == target) {
            maxLength = i + 1;  
            startIndex = 0; 
        }

        if (sumMap.find(cumulativeSum - target) != sumMap.end()) {
            int length = i - sumMap[cumulativeSum - target];  
            if (length > maxLength) {
                maxLength = length;
                startIndex = sumMap[cumulativeSum - target] + 1; 
            }
        }

        if (sumMap.find(cumulativeSum) == sumMap.end()) {
            sumMap[cumulativeSum] = i; 
        }
    }

    if (maxLength == 0) {
        return {};
    }

    for (int i = startIndex; i < startIndex + maxLength; i++) {
        result.push_back(nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;

    vector<int> result = longestSubarrayWithSum(nums, target);
    if (!result.empty()) {
        cout << "Longest subarray with sum " << target << ": ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No subarray found with sum " << target << endl;
    }

    return 0;
}
