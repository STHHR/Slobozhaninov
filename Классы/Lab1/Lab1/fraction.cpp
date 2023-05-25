#include "fraction.h"
#include <iostream>
using namespace std;

void fraction::Init()
{
	if ((first <= 0) or (second <= 0))
	{
		cout << "¬ведено неправильное число" << endl;
		abort();

	}
	else
	{
		Cos();
	}
}

void fraction::Read()
{
	cout << "¬ведите цену: ";
	cin >> first;
	cout << "¬ведите количество: ";
	cin >> second;
	Init();
}

void fraction::Show()
{
	cout << "cost = " << cost << endl;
}

void fraction::Cos()
{
	cost = first * second;
}