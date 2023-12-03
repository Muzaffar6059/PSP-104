#include <iostream>
#include<string>

using namespace std;
int main()
{
    string first_name, father_name;
    cout << "enter your first name "<<endl;
    cin >> first_name;
    cin.ignore();
    cout << "Your Full name is "<<first_name<<endl;
    cout << "enter your father name"<<endl;
    getline(cin, father_name);
    cout<<"your father name is "<<father_name<<endl;

}
