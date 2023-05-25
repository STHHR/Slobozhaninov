#include "Route.h"
#include <iostream>
#include <string>
using namespace std;
//функция для возврата объекта как результата
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
//функция для передачи объекта как параметра
void print_Route(Route t)
{
	t.show();
}
void main()
{
	//конструктор без параметров
	Route t1;
	t1.show();
	//коструктор с параметрами
	Route t2("Perm", "Berezniki", 3.2);
	t2.show();
	//конструктор копирования
	Route t3 = t2;
	t3.set_po("Moscow");
	t3.set_pn("Perm");
	t3.set_tm(74.5);
	//конструктор копирования
	print_Route(t3);
	//конструктор копирования
	t1 = make_Route();
	t1.show();
}