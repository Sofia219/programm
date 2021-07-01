#include <iostream>
#include<cmath>
using namespace std;

/**
 * \brief Функциия для расчета давления.
 * \param g, weight, area Параметры веса, угла и постоянной g .
 * \return Возвращает значение давления.
 */
double GetPressure(float  g, const double weight, const double area);

/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    setlocale(LC_ALL, "ru");
    float g = 9.81;
    double weight;
    cout << "Введите массу бетонной плиты" << endl;
    cin >> weight;
    double area;
    cout << "Введите площадь опоры" << endl;
    cin >> area;
    cout << "Давление: ";
    double pressure = GetPressure(g, weight, area);
    cout << pressure;
    return 0;
}

double GetPressure(float g, const double weight, const double area)
{
    return (weight * g) / area;
}