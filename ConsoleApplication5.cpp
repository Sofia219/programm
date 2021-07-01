#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double GetAngle(const double x1, const double x2, const double x3, const double y1, const double y2, const double y3);

int main()
{
	setlocale(LC_ALL, "Russian");

	double x1, y1;
	cout << "Введите координаты точки A (Xa,Ya) \n";
	cin >> x1 >> y1;

	double x2, y2;
	cout << "Введите координаты точки B (Xb,Yb) \n";
	cin >> x2 >> y2;

	double x3, y3;
	cout << "Введите координаты точки C (Xc,Yc) \n";
	cin >> x3 >> y3;

	if (((x3 - x2) / (x1 - x2)) == ((y3 - y2) / (y1 - y2)))
	{
		cout << "Все 3 точки лежат на одной прямой";
	}
	else
	{
		cout << "Точки не лежат на одной прямой" << endl;
		auto angle = GetAngle(x1, x2, x3, y1, y2, y3);
		cout << "Угол ABC равен " << angle << " градусов";
	}
}

double GetAngle(double x1, double x2, double x3,
	double y1, double y2, double y3) {
	return (acos((((x2 - x1) * (x3 - x2)) + ((y2 - y1) * (y3 - y2))) / (sqrt(pow((x2 - x1), 2)
		+ (pow((y2 - y1), 2))) * (sqrt(pow((x3 - x2), 2) + (pow((y3 - y2), 2)))))) * 180 / M_PI);
}

