#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    double sumEven = 0, countOdd = 0, sumOdd = 0;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;
    cout << "Enter number 5: ";
    cin >> num5;
    // Check if each number is even or odd
    if (num1 % 2 == 0) {
        sumEven += num1;
    }
    else {
        sumOdd += num1;
        countOdd++;
    }
    if (num2 % 2 == 0) {
        sumEven += num2;
    }
    else {
        sumOdd += num2;
        countOdd++;
    }
    if (num3 % 2 == 0) {
        sumEven += num3;
    }
    else {
        sumOdd += num3;
        countOdd++;
    }
    if (num4 % 2 == 0) {
        sumEven += num4;
    }
    else {
        sumOdd += num4;
        countOdd++;
    }
    if (num5 % 2 == 0) {
        sumEven += num5;
    }
    else {
        sumOdd += num5;
        countOdd++;
    }
    double averageOdd = (countOdd == 0) ? 0 : sumOdd / countOdd;
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Average of odd numbers: " << averageOdd << endl;
    return 0;
}
