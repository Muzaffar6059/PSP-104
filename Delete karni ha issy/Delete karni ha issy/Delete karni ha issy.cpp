#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Date {
    int day=0;
    int month=0;
    int year=0;
};
struct Student {
    string name;
    int rollNumber=0;
    Date birthDate;
};
void readStudentData(Student* studentPtr) {
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin >> ws, studentPtr->name);
    cout << "Enter roll number: ";
    cin >> studentPtr->rollNumber;
    cout << "Enter birth date details:\n";
    cout << "Day: ";
    cin >> studentPtr->birthDate.day;
    cout << "Month: ";
    cin >> studentPtr->birthDate.month;
    cout << "Year: ";
    cin >> studentPtr->birthDate.year;
}

void displayStudentData(Student* studentPtr, int count) {
    cout << endl << setw(20) << left << "Student Name" << setw(10) << left << "Roll No"
         << setw(10) << left << "Birth Date" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << setw(20) << left << (studentPtr + i)->name;
        cout << setw(10) << left << (studentPtr + i)->rollNumber;
        cout << left << (studentPtr + i)->birthDate.day << "/" << (studentPtr + i)->birthDate.month 
             << "/" << (studentPtr + i)->birthDate.year << endl;
    }
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student* studentArray = new Student[numStudents];

    Student* studentPtr = studentArray;

    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        readStudentData(studentPtr);
        studentPtr++;
    }
    studentPtr = studentArray;
    displayStudentData(studentPtr, numStudents);

    delete[] studentArray;
    return 0;
}












//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//typedef struct Student {
//    string name;
//    int age = 0;
//} S;
//
//void readData(S& std) {
//
//    cout << "Enter Student Name: " << endl;
//    getline(cin >> ws, std.name);
//
//    cout << "Enter The Age of a student: " << endl;
//    cin >> std.age;
//
//    cin.ignore();
//
//}
//
//// // display data of a structutre using pointer not pass by
//// void display(S* std, int length) {
////     S* ptr = &std[0];
//
////     for (int i = 0; i < length; i++)
////     {
////         cout << setw(20) << left << (ptr + i)->name;
////         cout << setw(20) << left << (ptr+i)->age;
////         cout << endl;
////     }
//// }
//// display data of a structutre using pointer not pass by
//void display(S* std, int length) {
//    S* ptr = &std[0];
//
//    int size = sizeof(std) / sizeof(std[0]);
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << setw(20) << left << (ptr + i)->name;
//        cout << setw(20) << left << (ptr + i)->age;
//        cout << endl;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the Number of student: " << endl;
//    cin >> n;
//
//    S* std = new S[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "\nEnter The Detail of Student " << i + 1 << endl;
//        readData(std[i]);
//    }
//
//    cout << endl << setw(20) << left << "Name" << setw(10) << left << "Age" << endl;
//
//    display(std, n);
//
//    delete[] std;
//
//    return 0;
//
//}