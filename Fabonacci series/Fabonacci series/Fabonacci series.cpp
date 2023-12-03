#include <iostream>
using namespace std;

int main() {
    //fabonacci series
    int n;
    cin >> n;
    int a = 0, b = 1, i = 1;
    cout << b << " ";
    while (i <= n) {
        int nextnumber = a + b;
        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
        i++;
    }

}