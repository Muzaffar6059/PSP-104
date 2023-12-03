#include <iostream>
#include <cmath>

using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
	double radius ;
	cin >> radius;
	double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
	cout << "The volume of the sphere with radius " << radius << " is " << volume << endl;
}