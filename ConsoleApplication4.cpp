#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double GetFirst(const double x);
double GetSecond(const double x);

int main()
{
	setlocale(LC_ALL, "Russian");

	const double a = 2.5;
	double x;
	cout << "Введите число x \n";
	cin >> x;
	if (x > a)
	{
		auto first = GetFirst(x);
		cout << first;
	}
	else
	{
		auto second = GetSecond(x);
		cout << second;
	}
}

double GetFirst(double x) {
	return x * pow(sin(x), 2);
}
double GetSecond(double x) {
	return x * pow(cos(x), 2);
}
