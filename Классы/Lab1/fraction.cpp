#include "fraction.h"
#include <iostream>
using namespace std;

void fraction::Init()
{
	if ((first <= 0) or (second <= 0))
	{
		cout << "������� ������������ �����" << endl;
		abort();

	}
	else
	{
		Cos();
	}
}

void fraction::Read()
{
	cout << "������� ����: ";
	cin >> first;
	cout << "������� ����������: ";
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