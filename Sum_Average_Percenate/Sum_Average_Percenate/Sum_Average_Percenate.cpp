#include <iostream>
using namespace std;
int main()
{
    float eng, math, phy, isl, comp, obtMarks;
    double average, percentage;
    cout << "Enter Your Subjects Marks " << endl;
    cout << "Enter English Marks " << endl;
    cin >> eng;
    cout << "Enter Math Marks " << endl;
    cin >> math;
    cout << "Enter Physics Marks " << endl;
    cin >> phy;
    cout << "Enter Ialamiat Marks " << endl;
    cin >> isl;
    cout << "Enter Computer Marks " << endl;
    cin >> comp;
    obtMarks = eng + math + phy + isl + comp;
    cout << "Your Obtain Marks is " << obtMarks << endl;

    average = obtMarks / 5.0;
    cout << "The Average Marks Is " << average << endl << endl;
    float MaxMarks;
    cout << "Enter Your Maximum Marks To get Percenatge" << endl;
    cin >> MaxMarks;
    percentage = ((obtMarks / MaxMarks) * 100);
    cout << "Your Percentage is " << percentage;
}