#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSumOfTwoNumbers(vector<int>& digits) {
    // Sort the array of digits in non-decreasing order
    sort(digits.begin(), digits.end());

    int num1 = 0, num2 = 0;

    // Alternate between forming num1 and num2 from the sorted digits
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + digits[i];
        } else {
            num2 = num2 * 10 + digits[i];
        }
    }

    // Return the sum of the two formed numbers
    return num1 + num2;
}

int main() {
    // Test cases
    vector<int> digits1 = {6, 8, 4, 5, 2, 3}; // Expected output: 604
    vector<int> digits2 = {5, 3, 0, 7, 4, 2}; // Expected output: 82

    cout << "Minimum possible sum of two numbers for digits1: " << minSumOfTwoNumbers(digits1) << endl;
    cout << "Minimum possible sum of two numbers for digits2: " << minSumOfTwoNumbers(digits2) << endl;

    return 0;
}
