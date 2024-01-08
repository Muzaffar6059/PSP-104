#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int Num = 2;
    int n;
    cout << "Enter A number: " << endl;
    cin >> n;
    bool flag = false;

    for (int i = 1; i <= n; i++)
    {
        if (n== pow(Num,i))
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes......." << endl;
    }
    else
    {
        cout << "No......" << endl;
    }
}
