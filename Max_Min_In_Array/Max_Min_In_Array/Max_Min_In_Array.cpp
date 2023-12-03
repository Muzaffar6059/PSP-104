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
		
		int count = 0;

		for (int  i = 0; i < sizeOfArray; i++)
		{
			for (int j = 0; j < sizeOfArray; j++)
			{
				if (result[i] == result[j])
				{
					count++;
				}
			}

			cout << "The number of itteration " << result[i] << " is " << count << endl;
			count = 0;
		}
}