#include <iostream>
using namespace std;

int main() {
	int result[5];

	int sizeOfArray = sizeof(result) / sizeof(result[0]);
	for (int i = 0; i < sizeOfArray; i++)
	{
		cout << " Enter the value " << i + 1 << " : " << endl;
		cin >> result[i];
	}

	int max = result[0];
	int min = result[0];
	
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (max < result[i])
		{
			max = result[i];
		}
		if (min > result[i])
		{
			min = result[i];

		}
	}
		cout << "\n\n The Maximan Value of Result is: " << max << endl;
		cout << " The Minimun Value of Result is: " << min << endl;
}