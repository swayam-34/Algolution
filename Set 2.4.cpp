// 4. A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and
// removing all non-alphanumeric characters, it reads the same forward and backward.
// Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.
// Example 1:
// Input: s = “A man, a plan, a canal: Panama”
// Output: true
// Explanation: “amanaplanacanalpanama” is a palindrome.
// Example 2:
// Input: s = “race a car”;
// Output: false

#include <iostream>
#include <cctype>  
using namespace std;

bool isPalindrome(string s) {
    int left = 0;               
    int right = s.length() - 1; 
    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        }
        else if (!isalnum(s[right])) {
            right--;
        }
        else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;  
            }
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    cout << "Is first string a palindrome? " << (isPalindrome(s1) ? "true" : "false") << endl;
    cout << "Is second string a palindrome? " << (isPalindrome(s2) ? "true" : "false") << endl;

    return 0;
}
