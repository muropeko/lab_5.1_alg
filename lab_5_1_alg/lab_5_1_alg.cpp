// lab_5_1_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 5.1
//  Функції, що містять арифметичний вираз
// Варіант 6

#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y);
int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = h(pow(s, 2), pow(t, 2)) + h(pow(s + t, 1), 2);
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y)
{
	return ((x * y) / 1 + pow(x, 2) * pow(y, 2));
}
