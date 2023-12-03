#include <iostream>
using namespace std;

int main() {
    // Create arrays
    int firstArray[3];
    int reversedArray[3];

    // Insert values into the first array
    cout << "Enter three values for the first array:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> firstArray[i];
    }

    // Put the reverse values into the second array
    for (int i = 0; i < 3; i++) {
        reversedArray[i] = firstArray[2 - i];
    }

    // Print the first array
    cout << "\nFirst Array: ";
    for (int i = 0; i < 3; i++) {
        cout << firstArray[i] << " ";
    }

    // Print the second array
    cout << "\nReversed Array: ";
    for (int i = 0; i < 3; i++) {
        cout << reversedArray[i] << " ";
    }

    return 0;
}
