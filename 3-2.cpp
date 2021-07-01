#include <iostream>

using namespace std;
/**
 * \brief Функция расчета факториала числа
 * \param k число
 * \return значение факториала
 */
double factorial(const int k);

/**
 * \brief Функция расчета рекуррентного соотношения
 * \param index номер члена ряда
 * \return
 */
double Recurrence(const size_t index);


/**
 * \brief Рассчитывает сумму ряда через рекуррентное соотношение
 * из n членов
 * \param size количество членов ряда
 * \return
 */
double Sum(const size_t n);


/**
 * \brief Рассчитывает сумму ряда через рекуррентное соотношение
 * до тех пор, пока текущий член ряда не превосходит epsilon
 * \param epsilon точность расчета суммы ряда
 * \return
 */
double Sum1(const double epsilon);



/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
	int n;
	cout << "Enter n » ";
	cin >> n;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Вы ввели не число!" << endl;
	}
	else {
		cout << "result for n = " << Sum(n) << endl;
	}

	double epsilon;
	cout << "enter eps » ";
	cin >> epsilon;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Вы ввели не число!" << endl;
	}
	else {
		cout << "\n res for EPS = " << Sum1(epsilon) << endl;
	}
	return 0;
}
double factorial(const int k)
{
	int res = 1;
	for (int i = 1; i <= k; i++) {
		res = res * i;
	}
	return res;
}

double Recurrence(const size_t index)
{
	return factorial(index) / factorial(4 + index);
}


double Sum(const size_t n)
{
	double sum = 0;
	size_t k = 0;
	while (k < n)
	{
		k++;
		sum += factorial(k) / factorial(4 + k);

	}
	return sum;
}


double Sum1(const double epsilon)
{
	auto previous = 1.0 / (2 * 3 * 4 * 5);
	auto sum = previous;
	auto k = 1;
	while (abs(previous) > epsilon)
	{
		const auto current = Recurrence(k) * previous;
		sum += current;
		previous = current;
		k++;
	}

	return sum;
}
