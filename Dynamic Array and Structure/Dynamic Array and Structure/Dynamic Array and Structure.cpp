#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef struct Student {
    string name;
    int age = 0;
} S;

void readData(S &std) {

    cout << "Enter Student Name: " << endl;
    getline(cin>> ws, std.name);

    cout << "Enter The Age of a student: " << endl;
    cin >> std.age;

    cin.ignore();

}

// display data of a structure array pass by pointer
//void Display(S *std) {
//    cout << setw(20) << left << std->name;
//    cout << setw(20) << left << std->age;
//    cout << endl;
//}

// display data of a structutre using pointer not pass by
void display(S* std, int length) {
    S* ptr = &std[0];

    for (int i = 0; i < length; i++)
    {
        cout << setw(20) << left << (ptr + i)->name;
        cout << setw(20) << left << (ptr+i)->age;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the Number of student: " << endl;
    cin >> n;

    S* std = new S[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter The Detail of Student " << i + 1 << endl;
        readData(std[i]);

    }

    cout << endl << setw(20) << left << "Name" << setw(10) << left << "Age" << endl;

    /*for (int i = 0; i < n; i++)
    {
        Display(&std[i]);
    }*/

    display(std, n);

    delete[] std;

    return 0;

}


/*
// string character swaping 

#include<iostream>
#include<string>

using namespace std;

string swapText(string s) {
    char c1 = 'e', c2 = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c1)
        {
            s[i] = c2;
        }
        else if (s[i]==c2)
        {
            s[i] = c1;
        }
    }
    return s;
}

int main() {

    string s = "muzeffar eli mirze";

    cout << swapText(s);
    return 0;
}
*/