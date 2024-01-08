#include<iostream>
using namespace std;

int main() {
	const int size = 3;

	int matrix[size][size];

	//Input Elements in the matrix
	cout << " Enter the value of elements: " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// Principal diagonal 

	cout << "\n The Diagonal of a Matrix is: " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j || i+j == size-1 )
			{
				cout << matrix[i][j] <<"\t";
			}
			else
			{
				cout << " " << "\t";
			}
		}
		cout << endl;
	}
	// Second principal diagonal 

	/*cout << "\n The Principal Diagonal of a Matrix is:  ";
	int row = 0, col = size - 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[row][col] << " ";
			break;
		}
		row++;
		col--;
	}*/


	/*cout << "\n The Principal Diagonal of a Matrix is: ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i + j == size-1)
			{
				cout << matrix[i][j] << " ";
			}
		}

	}*/
}