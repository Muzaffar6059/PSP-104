#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter any number " << endl;
    cin >> n;
    int original_n = n;
    string length_n = to_string(n);
    // to_string(n) -> converts n to string
    int sum = 0, length = length_n.length();
    // length_n.length() -> returns the length of the string

    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, length);
        n = n / 10;
    }

    if (sum == original_n) {
        cout << original_n << " is Armstrong number " << endl;
    }
    else {
        cout << original_n << " is not an Armstrong number " << endl;
    }
    return 0;
}