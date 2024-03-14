#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 1;
	cout << "num     Square    cube\n";
	while (num<11)
	{
	//int sq, cube;
		int sq = pow(num, 2);
		int cube = pow(num, 3);

		cout << num << "     " << sq <<"     " << cube <<"      " << endl;
		num++;
	}
    return 0;
}