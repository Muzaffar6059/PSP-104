   #include <iostream>
   using namespace std;


   // Function to perform bubble sort on an array
   void bubbleSort(int arr[], int size) {
       for (int i = 0; i < 2*size - 1; ++i) {
           for (int j = 0; j < 2*size - i - 1; ++j) {
               if (arr[j] > arr[j + 1]) {
                   // Swap arr[j] and arr[j + 1]
                   int temp = arr[j];
                   arr[j] = arr[j + 1];
                   arr[j + 1] = temp;
               }
           }
       }
   }

   int main() {
     const int N = 4;
     int arr1[N] = {1, 5, 18, 10};
     int arr2[N] = {2, 4, 6, 9};
     int arr3[2*N];

     for (int i = 0; i < N; i++) {
       arr3[2*i] = arr1[i];
       arr3[2*i + 1] = arr2[i];
     }

     bubbleSort(arr3, N);

     for (int i = 0; i < 2*N; i++) {
       cout << arr3[i] << " ";
     }
     return 0;
   }
