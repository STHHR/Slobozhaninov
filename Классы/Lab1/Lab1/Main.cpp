#include <iostream>
#include "fraction.h"
using namespace std;

void main() 
{
	setlocale(0, "rus");
	bool c = 1;
	fraction A;
	while (c){
		A.Read();
		A.Cos();
		A.Show();
		cout << "����������? (1 - ��, 0 - �����)" << endl;
		cin >> c;
	}
}