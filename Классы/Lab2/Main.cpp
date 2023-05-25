#include "Route.h"
#include <iostream>
#include <string>
using namespace std;
//������� ��� �������� ������� ��� ����������
Route make_Route()
{
	string s;
	string i;
	float d;
	cout << "Vvedite punkt otpravleniya: ";
	cin >> s;
	cout << "Vvedite punkt naznacheniya: ";
	cin >> i;
	cout << "Vvedite vremya v puti: ";
	cin >> d;
	Route t(s, i, d);
	return t;
}
//������� ��� �������� ������� ��� ���������
void print_Route(Route t)
{
	t.show();
}
void main()
{
	//����������� ��� ����������
	Route t1;
	t1.show();
	//���������� � �����������
	Route t2("Perm", "Berezniki", 3.2);
	t2.show();
	//����������� �����������
	Route t3 = t2;
	t3.set_po("Moscow");
	t3.set_pn("Perm");
	t3.set_tm(74.5);
	//����������� �����������
	print_Route(t3);
	//����������� �����������
	t1 = make_Route();
	t1.show();
}