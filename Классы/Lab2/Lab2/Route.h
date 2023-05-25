#include <iostream>
#include <string>
using namespace std;

class Route
{
	string po;
	string pn;
	float tm;
public:
	Route();//конструктор без параметров
	Route(string, string, float);//конструктор с параметрами
	Route(const Route&);//конструктор копирования
	~Route();//деструктор
	string get_po();//селектор
	void set_po(string);//модификатор
	string get_pn();//селектор
	void set_pn(string); //модификатор
	float get_tm();//селектор
	void set_tm(float); //модификатор
	void show();//просмотр атрибутов
};
