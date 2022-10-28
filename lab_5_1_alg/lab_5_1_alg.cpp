/*#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y); 
int main()
{
	double s, t;
	
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = h(pow(s,2),pow(t,2)) + h(pow(s+t,1),2);
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y) 
{
	return ((x * y) / 1 + pow(x, 2) * pow(y, 2));
}*/
#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y, const double z); // прототип
int main()
{
	double a, b;
	
		cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	double c = h(a, -b, 1) + h(2, a + b, abs(a - b));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y, const double z) // визначення
{
	return (x * x + x * z - y * z + y * y) / (x * x + abs(x * y * z) + z * z);
}