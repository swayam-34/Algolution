// 5. Program to check if the array is a palindrome.
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is in palindrome order." << endl;
    } else {
        cout << "The array is not in palindrome order." << endl;
    }

    return 0;
}
