#include <iostream>
using namespace std;

// Recursion Function for a factorail 
int fact(int n) {
    if (n < 2) {
        return 1;
    }
    return n * fact(n - 1);
}
//Recursion Function for Fabonnaci Sequence
int fabo(int n) {
    if (n < 2) {
        return 1;
    }
    return fabo(n - 1) + fabo(n - 2);
    // 1 1 2 3 5 8 13 21 34 55
}
//Recursion Function for power series
int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * power(x, n - 1);
}
int main() {
    int n, x;
    cout << "enter any number" << endl;
    cin >> x;
    cout << "enter any power" << endl;
    cin >> n;
    // cout << "The factorial of a number is " << fact(n) << endl;
    // cout << "The Fabonnaci Sequence of a number is " << fabo(n) << endl;
    cout << "Your Answer is " << power(x, n) << endl;
}