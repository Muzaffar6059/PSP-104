#include <iostream>

using namespace std;

int main() {
    // Variables to store user input
    double startMeter, increment;
    int numConversions;

    // Get user input
    cout << "Enter the starting meter value: ";
    cin >> startMeter;

    cout << "Enter the number of conversions to be made: ";
    cin >> numConversions;

    // Use a default increment of 10 if numConversions is greater than 10
    if (numConversions > 10) {
        cout << "Number of conversions is greater than 10. Using a default increment of 10 meters." << endl;
        increment = 10.0;
    }
    else {
        cout << "Enter the increment between meter values: ";
        cin >> increment;
    }

    // Display headings
    cout << "\nMeter\t\tFeet" << endl;
    cout << "-----------------------" << endl;

    // Conversion loop
    for (int i = 0; i < numConversions; ++i) {
        // Convert meters to feet using the relationship 1 meter = 3.281 feet
        double feet = startMeter * 3.281;

        // Display the values
        cout << startMeter << "\t\t" << feet << endl;

        // Increment the meter value
        startMeter += increment;
    }

    return 0;
}
