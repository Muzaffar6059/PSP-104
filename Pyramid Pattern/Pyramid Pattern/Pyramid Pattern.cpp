#include<iostream>
using namespace std;

int main() {
	int row,num;

        cout << "Enter A number: " << endl;
        cin >> row;
        while (row % 2 == 0)
        {
            cout << "please enter an odd number" << endl;
            cin >> row;
        }

            for (int i = 1; i <= row; i++)
            {
                for (int j = 1; j <= row - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << "*";
                }
                cout << endl;

            }

            for (int i = row - 1; i >= 1; i--)
            {
                for (int j = 1; j <= row - i; j++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << "*";
                }
                cout << endl;

            }

}