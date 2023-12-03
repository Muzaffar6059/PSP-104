#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, op;
    cout << "Enter the first and second number: " << endl;
    cin >> num1 >> num2;
    cout << "press 1 for addition:" << endl;
    cout << "press 2 for subtract:" << endl;
    cout << "press 3 for multiply:" << endl;
    cout << "press 4 for division:" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 - num2;
        break;
    case 3:
        cout << num1 * num2;
        break;
    case 4:
        cout << num1 / num2;
    default:
        cout << "invalid";
    }

}
