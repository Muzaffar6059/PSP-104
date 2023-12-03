#include<iostream>
using namespace std;

int main() {
    // this is our first quiz of c++ to print a table of any number using loop
    int a;
    cout << "enter any number";
    cin >> a;
    int i = 1;
    do
    {
        /* code */
        int table = a * i;
        cout << a << "*" << i << "=" << table << endl;
        i++;
    } while (i <= 10);

    //cout<<"This code is using For loop"<<endl;
    //for (int n = 1; n <= 10; n++)    {
    //    /* code */
    //cout<<a<<"*"<<n<<"="<<a*n<<endl;
    //}

    return 0;
}