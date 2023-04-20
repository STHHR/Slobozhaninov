#include <iostream>
#include "fraction.h"
using namespace std;

void fraction::Init(int F, int S){
	first = F;
	second = S;
}

void fraction::Read(){
	first = 1;
	cout << "\nfirst = 1, 2, 5, 10, 50, 100, 500, 1000, 5000, 0 - exit  ";
	cin >> first;
	cout << "\nsecond?";
	cin >> second;
}

void fraction::Show(){
	cout << "\nfirst?" << first;
	cout << "\nsecond?" << second;
	cout << "\n";
}

int fraction::summa(){
	return first * second;
}