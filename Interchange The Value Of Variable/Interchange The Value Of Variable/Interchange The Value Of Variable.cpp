#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a=10, b=20, temp;
    cout << " The value of a and b without interchange" << endl;
    cout << "the value of a is " << a << " and the value of b is " << b<<endl;

    temp = a;
    a = b;
    b = temp;

    /*temp = a + b;
    a = temp - a;
    b = temp - b;*/
    cout << endl << endl;
    cout << " The value of a and b after interchange" << endl;
    cout << "the value of a is " << a << " and the value of b is " << b << endl;

}
