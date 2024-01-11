#include<iostream>
using namespace std;


void mergeArray(int arr1[], int arr2[], int arr3[], int size1, int size2);

void read(int arr[], int size);
void display(int arr[], int size);

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int size);

int main() {

    const int N1 = 3;
    const int N2 = 4;

    int Arr1[N1];
    int Arr2[N2];

    const int N3 = N1 + N2;

    int Arr3[N3];

    // Input for arr1
    cout << "Enter elements for arr1:\n";
    read(Arr1, N1);

    // Input for arr2
    cout << "Enter elements for arr2:\n";
    read(Arr2, N2);
   


    mergeArray(Arr1, Arr2, Arr3, N1, N2);

    bubbleSort(Arr3, N3);

    display(Arr3, N3);

    return 0;
}



void mergeArray(int arr1[], int arr2[], int arr3[], int size1, int size2) {

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }
}

void read(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}
void display(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] <<" ";
    }
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}