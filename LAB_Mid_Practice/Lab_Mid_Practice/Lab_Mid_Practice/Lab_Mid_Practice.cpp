#include<iostream>
using namespace std;


int main() {
    
    int row;
    cout << "enter any number" << endl;
    cin >> row;
    /*
    for (int i = 1; i <=n ; n--)
    {
      for (int j = 1; j <= n; j++)
      {
        cout << " *";
      }
      cout << endl;
    }
    */

    // Pyramid Pattern

     /*for (int i = 1; i <= row; i++)
     {
         for (int j = 1; j <= row - i; j++)
         {
             cout << " ";
         }
         for (int j = 1; j <= 2 * i - 1; j++)
         {
             cout << "*";
         }
         cout << endl;

     }

     for (int i = row - 1; i >= 1; i--)
     {
         for (int j = 1; j <= row - i; j++)
         {
             cout << " ";
         }
         for (int j = 1; j <= 2 * i - 1; j++)
         {
             cout << "*";
         }
         cout << endl;

     }*/


    // for (int i = 1; i <=n ; i++)
    // {
    //   for (int j = 1; j <= i; j++)
    //   {
    //     cout << i;
    //   }
    //   cout << endl;
    // }

  // int count =1;
  //   for (int i = 1; i <=n ; i++)
  //   {
  //     for (int j = 1; j <= i; j++)
  //     {
  //       cout << count;
  //       count++;
  //     }
  //     cout << endl;
  //   }



     for (int i = 1; i <= row; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             cout << "&";
         }
         for (int j = 1; j <= row - i; j++)
         {
             cout << "*";
         }
         cout << endl;

     }

    //Numbers Triangle
    
    /*for (int i = 1; i <= row; i++)
    {
        int k;
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }*/

}
