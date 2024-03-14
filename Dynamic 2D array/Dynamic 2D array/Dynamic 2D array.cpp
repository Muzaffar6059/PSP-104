#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout << "Enter the number of row:" << endl;
    cin >> row;

    int ** mat = new int*[row];
    int* sizeArr = new int[row];
    int i,j;
    for ( i = 0; i < row; i++)
    {
        cout << "Enter the number of column in row " << i + 1 << endl;
        cin >> col;
        sizeArr[i] = col;

        mat[i] = new int[col];
        for (j = 0; j < col; j++)
        {
            mat[i][j] = j + 1;
        }
    }

    cout << "\nHere is the Dynamic 2D matrix having different numbers of row:" << endl << endl;

    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < sizeArr[i]; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    return 0;
}