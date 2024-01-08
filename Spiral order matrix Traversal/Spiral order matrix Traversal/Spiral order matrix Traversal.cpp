#include<iostream>
using namespace std;

int main() {
	const int Row = 3, Col = 4;

	int matrix[Row][Col];

	cout << "Enter the value in the Matrix: " << endl;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// Traversal Output

	int row_start = 0, row_end = Row - 1, col_start = 0, col_end = Col - 1;

	while (row_start <= row_end && col_start <= col_end)
	{
		//First Row
		for (int col = col_start; col <= col_end; col++)
		{
			cout << matrix[row_start][col] << " ";
		}
		row_start++;

		// Last Column
		for (int row = row_start; row <= row_end; row++)
		{
			cout << matrix[row][col_end] << " ";
		}
		col_end--;

		// Last Row
		if (row_start <= row_end)
		{
		for (int col = col_end; col >= col_start ; col--)
			{
				cout << matrix[row_end][col] << " ";
			}
		}
		row_end--;

		// First Column
		if (col_start <= col_end)
		{
		for (int row = row_end; row >= row_start ; row--)
			{
				cout << matrix[row][col_start] << " ";
			}
		}
		col_start++;
	}

	return 0;
}