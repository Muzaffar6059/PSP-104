#include<iostream>
using namespace std;

void readMatrix(int** matrix, int row, int col) {
    cout << "Enter The element of matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }

    }

}
void DisplayMatrix(int** matrix, int row, int col) {
    cout << "Result matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }

}

void multpliMatrix(int** mat1, int rowA, int colA, int** mat2, int rowB, int colB, int** result) {
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

}

int main() {
    int rowA, colA, rowB, colB;

    cout << "Enter the Rows and columns of 1st matrix:";
    cin >> rowA >> colA;

    cout << "Enter the Rows and columns of 2nd matrix:";
    cin >> rowB >> colB;

    if (colA != rowB)
    {
        cout << "Multiplication is not Possible" << endl;
        return 1;
    }

    // Allocation of Matrix 1
    int** mat1 = new int* [rowA];
    for (int i = 0; i < rowA; i++)
    {
        mat1[i] = new int[colA];
    }

    // Allocation of Matrix 2
    int** mat2 = new int* [rowB];
    for (int i = 0; i < rowB; i++)
    {
        mat2[i] = new int[colB];
    }

    // Allocation of result Matrix
    int** result = new int* [rowA];
    for (int i = 0; i < rowA; i++)
    {
        result[i] = new int[colB];
    }


    //read matrix function to read element of a matrix
    readMatrix(mat1, rowA, colA);
    readMatrix(mat2, rowB, colB);

    multpliMatrix(mat1, rowA, colA, mat2, rowB, colB, result);

    DisplayMatrix(result, rowA, colB);


    // Dealocation of Matrix 1
    for (int i = 0; i < rowA; i++)
    {
        delete[] mat1[i];
    }
    delete[] mat1;

    // Dealocation of Matrix 2
    for (int i = 0; i < rowB; i++)
    {
        delete[] mat2[i];
    }
    delete[] mat2;

    // Dealocation of Matrix result
    for (int i = 0; i < rowA; i++)
    {
        delete[] result[i];
    }
    delete[] result;


    return 0;
}