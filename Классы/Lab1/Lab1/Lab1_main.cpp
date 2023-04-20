#include<iostream>
#include "fraction.h"
using namespace std;

int main(){
	fraction B;
	B.Read();
	if (!((B.first == 0) || (B.first == 1) || (B.first == 2) || (B.first == 5) || (B.first == 10) || (B.first == 50) || (B.first == 100) || (B.first == 500) || (B.first == 1000) || (B.first == 5000))){
		cout << "error";
		return 0;
	}
	B.Show();
	int a = 0;
	cout << B.summa() << endl;
	a = a + B.summa();
	while (B.first != 0){
		B.Read();
		if (!((B.first == 0) || (B.first == 1) || (B.first == 2) || (B.first == 5) || (B.first == 10) || (B.first == 50) || (B.first == 100) || (B.first == 500) || (B.first == 1000) || (B.first == 5000))) {
			cout << "error";
			return 0;
		}
		B.Show();
		cout << B.summa() << endl;
		a = a + B.summa();
	}
	cout << "Summa = " << a;
	return 0;
}