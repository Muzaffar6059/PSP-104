#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

typedef struct student {
	string name;
	float gpa = 0;
} st;

void readData(st& std, int size);
void display(st std[], int size);

int main() {
	const int N = 2;

	st std[N];
	cout << "Enter The Detail Of " << N << " Students:" << endl;
	for (int i = 0; i < N; i++)
	{
		readData(std[i], i);

	}

	cout << endl << endl;

	cout << "Details:" << endl;
	cout << setw(20) << left << "Name" << setw(5) << left << "GPA" << endl;
	display(std, N);

	return 0;
}

void readData(st& std, int size) {
	
		cout << "Enter The Detail Of student " << size + 1 << endl;
		cout << "Enter Student Name: " << endl;
		getline(cin, std.name);
		cout << "Enter Student GPA: " << endl;
		cin >> std.gpa;

		cin.ignore();

		cout << endl;
}

void display(st std[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << setw(20) << left << std[i].name << setw(5) << left << std[i].gpa << endl;
	}
}
