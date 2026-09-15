// Lab_02.cpp
// Кучальська Власта
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double Pi = 4 * atan(1.); // число пі
	double a, z1, z2;
	cout << "a = ";
	cin >> a;

	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a))); // знаходимо z1
	z2 = cos((3.0 / 2) * Pi - a) / sin((3.0 / 2) * Pi - a); // знаходимо z2
	
	cout << endl;
	cout <<"z1 = " << z1 << endl;
	cout <<"z2 = " << z2 << endl;

	cin.get();
	return 0;
}
