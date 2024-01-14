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

void Display(S *std) {
    cout << setw(20) << left << std->name;
    cout << setw(20) << left << std->age;
    cout << endl;
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

    for (int i = 0; i < n; i++)
    {
        Display(&std[i]);
    }

    delete[] std;

    return 0;

}
