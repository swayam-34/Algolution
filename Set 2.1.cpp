// 1. Given an integer array nums, find the
// subarray with the largest sum, and return its sum.
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
   
    int current_sum = nums[0];  
    int max_sum = nums[0];      
    
   
    for (int i = 1; i < nums.size(); i++) {
        if (current_sum + nums[i] < nums[i]) {
            current_sum = nums[i];
        } else {
            
            current_sum = current_sum + nums[i];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int result = maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
