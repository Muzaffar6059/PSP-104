#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

struct Student {
	char regNo[11];
	char name[40];
	date dob;
	int subMarks[5];
};

int main() {

	const int SIZE = 5;
	Student std[SIZE];
	int i, j;

	ofstream file("Student.dat", ios::binary);
	if (!file)
	{
		cout << "Error";
	}
	else
	{
		cout << "Enter the detail of student: " << endl;
		for (i = 0; i < SIZE; i++)
		{
			cout << "detail of student " << i + 1 << " :" << endl;
			cout << "Enter the registration No: ";
			cin >> std[i].regNo;
			cout << "Enter student name: ";
			cin.ignore();
			cin.getline(std[i].name, 40);
			cout << "Enter the Date of birth: " << endl;
			cout << "Date: ";
			cin >> std[i].dob.day;
			cout << "Month: ";
			cin >> std[i].dob.month;
			cout << "Year: ";
			cin >> std[i].dob.year;
			cout << "Enter the marks of five Subjects: " << endl;
			for (j = 0; j < 5; j++)
			{
				cin >> std[i].subMarks[j];
			}
		}
		file.write((char*)&SIZE, sizeof(SIZE));
		file << endl;
		file.write((char*)&std, sizeof(std));
	}

	file.close();

	return 0;
}