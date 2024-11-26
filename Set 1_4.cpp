// 4. Program to reverse the order of 7 integers.
#include <iostream>
using namespace std;

int main() {
    int arr[7];
    cout << "Enter 7 integers:" << endl;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 7 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[7 - i - 1];
        arr[7 - i - 1] = temp;
    }

    cout << "Reversed array:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
