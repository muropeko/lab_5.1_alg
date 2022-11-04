// lab_5_4_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 5.4
// Обчислення сум та добутків за допомогою рекурсі
// Варіант 6


#include <iostream>

using namespace std;
double D0(const int N)
{
	double d = 1;
	int K;
	for (int K = N; K <= N; K++)
		d += ((K - N) / (K + N)) + 1;
	return d;
}

double D1(int N, const int K)
{
	if (K > N)
		return 1;
	else
		return (((K - N) / (K + N)) + 1) + D1(N, K + 1);
}

double D2(const int N, const int K)
{
	if (K < N)
		return 1;
	else
		return (((K - N) / (K + N)) + 1) + D2(N, K - 1);
}

double D3(const int N, const int K, double t)
{
	t = t + (((K - N) / (K + N)) + 1);
	if (K >= N)
		return t;
	else
		return D3(N, K + 1, t);
}

double D4(const int N, const int K, double t)
{
	t = t + (((K - N) / (K + N)) + 1);
	if (K <= N)
		return t;
	else
		return D4(N, K - 1, t);
}

int main()
{
	int N, K;
	N = 19;

	cout << "(iter) D0 = " << D0(N) << endl;
	cout << "(rec up ++) D1 = " << D1(19, N) << endl;
	cout << "(rec up --) D2 = " << D2(N, N) << endl;
	cout << "(rec down ++) D3 = " << D3(1, N, 1) << endl;
	cout << "(rec down --) D4 = " << D4(N, N, 1) << endl;
	return 0;
}
