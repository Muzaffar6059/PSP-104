#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    int factor = 0;

    cout << "Enter any number: " << endl;
    cin >> n;

    if (n < 2) {
        cout << "Invalid number" << endl;
    }
    else {
        while (count <= n) {
            if (n % count == 0) {
                factor++;
            }
            count++;
        }
    }
    if (factor == 2) {
        cout << n << " is prime number " << endl;
    }
    else {
        cout << n <<" is composite number " << endl;
    }

    return 0;



	/*
Q.No 1
int a = 5, b = 7;
cout << (a > b) << endl;*/


/*Q.No2
float m = 7.6;
while (m > 1) {
	cout << m << "\t";
	if (m > 4.1)
		m -= 2.1;
	else
		m--;
}*/

/*int m = 7;
cout << m-- << endl;
cout << --m << endl;*/
}