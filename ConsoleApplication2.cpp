#include <iostream>
#include<cmath>
using namespace std;
double getDistance(const double x1, const double y1,
    const double x2, const double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); /*Функция вычисления расстояния*/
}
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите координаты точки А" << endl; /*следует ввод пользователем координат точки А*/
    double x1, y1;
    cin >> x1 >> y1;
    cout << "Введите координаты точки B" << endl; /*следует ввод пользователем координат точки B*/
    double x2, y2;
    cin >> x2 >> y2;
    cout << "Расстояние между точками: ";
    double distance = getDistance(x1, y1, x2, y2); /*Вызов функции*/
    cout << distance;
    return 0;
}
