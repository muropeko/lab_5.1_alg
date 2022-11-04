// lab_5_5_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 5.5
// Рекурсивні функції
// Варіант 6
 

#include <iostream>
using namespace std;

double f(int n, int level, int& depth)
{
	if (level > depth) {
		depth = level;
		cout << " level = " << level << endl;

		if (n == 1)
			return 1;
		else if (n % 2 == 0)
			return 2 * f(n / 2, level + 1, depth) - 1;
		else if (n % 2 == 1)
			return 2 * f(n / 2, level + 1, depth) + 1;
	}
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	
	int depth = 0; 
	cout << "num of repeating: " << f(n, 1, depth) << endl;

	cout << "depth: " << depth << endl;
	return 0;
}
