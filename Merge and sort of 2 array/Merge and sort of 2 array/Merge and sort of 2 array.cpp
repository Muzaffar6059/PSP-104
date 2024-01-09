   #include <iostream>
   using namespace std;


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

   int main() {
     const int N = 4;
     const int N2 = 3;
     int arr1[N] = {1, 5, 18, 10};
     int arr2[N2] = {2, 4, 9};
     int arr3[N+N2];

     const int size = max(N, N2);

     for (int i = 0; i < size; i++) {
       arr3[2*i] = arr1[i];
       if ((2 * i + 1) < (N + N2)) {

       arr3[2*i + 1] = arr2[i];
       }
     }

     const int tN = N + N2;
     bubbleSort(arr3, tN);

     for (int i = 0; i < (N+N2); i++) {
       cout << arr3[i] << " ";
     }
     return 0;
   }
