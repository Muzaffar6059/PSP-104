#include<iostream>
using namespace std;

int main() {
	int result[4], num;

	int arrSize = sizeof(result) / sizeof(result[0]);
	for (int i = 0; i < arrSize; i++)
	{
		cout << " Enter The Value one after another" << endl;
		cin >> result[i];
	}
	cout << " Enter a number to find: " << endl;
	cin >> num;

	bool flag = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (result[i]==num)
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		cout << " The number is found ";
	}
	else {
		cout << " The Number is not found";
	}

	return 0;
}