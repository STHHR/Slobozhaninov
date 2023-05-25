#include "Route.h"
#include <iostream>
#include <string>
using namespace std;
//����������� ��� ����������
Route::Route()
{
	po = "";
	pn = "";
	tm = 0;
	cout << "Constructor bez parametrov dlia objecta" << this << endl;
}
//����������� � �����������
Route::Route(string N, string K, float S)
{
	po = N;
	pn = K;
	tm = S;
	cout << "Constructor s parametrami dlia objecta" << this << endl;
}
//����������� �����������
Route::Route(const Route& t)
{
	po = t.po;
	pn = t.pn;
	tm = t.tm;
	cout << "Constructor copirovania dlia objecta" << this << endl;
}
//����������
Route::~Route()
{
	cout << "Destructor dlia objecta" << this << endl;
}
//���������
string Route::get_po()
{
	return po;
}
string Route::get_pn()
{
	return pn;
}
float Route::get_tm()
{
	return tm;
}
//������������
void Route::set_po(string N)
{
	po = N;
}
void Route::set_pn(string K)
{
	pn = K;
}
void Route::set_tm(float S)
{
	tm = S;
}
//����� ��� ��������� ���������
void Route::show()
{
	cout << "Punkt otpravleniya: " << po << endl;
	cout << "Punkt naznacheniya: " << pn << endl;
	cout << "Vremya v puti: " << tm << endl;
}