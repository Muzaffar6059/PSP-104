#include <iostream>
using namespace std;

// This is a function using pointer 
void swapPointer(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
// This is a function using reference variable
void swapReferenceVar(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int x, y;
	cout << "enter any number" << endl;
	cin >> x;
	cout << "enter any number" << endl;
	cin >> y;
	cout << "The value of x is " << x << " and the value of y is " << y << endl;
	// swapPointer(&x, &y);
	swapReferenceVar(x, y);
	cout << "Swap value of x and y" << endl;
	cout << "The value of x is " << x << " and the value of y is " << y << endl;
}