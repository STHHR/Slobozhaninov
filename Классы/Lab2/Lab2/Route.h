#include <iostream>
#include <string>
using namespace std;

class Route
{
	string po;
	string pn;
	float tm;
public:
	Route();//����������� ��� ����������
	Route(string, string, float);//����������� � �����������
	Route(const Route&);//����������� �����������
	~Route();//����������
	string get_po();//��������
	void set_po(string);//�����������
	string get_pn();//��������
	void set_pn(string); //�����������
	float get_tm();//��������
	void set_tm(float); //�����������
	void show();//�������� ���������
};
