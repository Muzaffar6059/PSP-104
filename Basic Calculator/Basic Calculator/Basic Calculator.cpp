#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char symbol;
    cout << "Enter The first Number: " << endl;
    cin >> num1;
    cout << "Enter The Arthematic Operator: " << endl;
    cin >> symbol;
    cout << "Enter The second number: " << endl;
    cin >> num2;
    if (symbol == '+') {
        result = num1 + num2;
        cout << "The Sum Of Two numbers are: " << result <<endl;
    }
    else if (symbol == '-') {
        result = num1 - num2;
        cout << "The Difference Of Two numbers are: " << result << endl;
    }
    else if (symbol == '*') {
        result = num1 * num2;
        cout << "The Product Of Two numbers are: " << result << endl;
    }
    else if (symbol == '/') {
        result = num1 / num2;
        cout << "The division Of Two numbers are: " << result << endl;
    }
    else {
        cout << "Invalid Operator! Allow only Arthematic Operator" << endl;
    }
}
