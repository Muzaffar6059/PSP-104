#include <iostream>
using namespace std;

const int colA = 3;
const int rowA = 3;
const int colB = 2;
const int rowB = 3;

void multiplyMatrices(int matrixA[][colA], int matrixB[][colB], int matrixC[][colB], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j <= colB; j++) {
            matrixC[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

void readMatrix(int matrix[][3], int row, int col) {
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }
}
void readMatrix(int matrix[][2], int row, int col) {
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][2], int row, int col) {
    cout << "\nThe matrix:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {


    if (colA != rowB) {
        cout << "Matrix multiplication is not possible" << endl;
    }
    else {

        int matrixA[rowA][colA];
        int matrixB[rowB][colB];
        int matrixC[rowA][colB];

        readMatrix(matrixA, rowA, colA);
        readMatrix(matrixB, rowB, colB);

        multiplyMatrices(matrixA, matrixB, matrixC, rowA, colA, colB);

        printMatrix(matrixC, rowA, colB);
    }
}