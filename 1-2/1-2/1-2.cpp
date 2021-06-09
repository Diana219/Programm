#include <iostream>
#include <math.h>

using namespace std;
/**
* \brief Определить объем и полную поверхность конуса
* \param double R - радиус конуса
* \param double a - угол при вершине в осевом сечении конуса
* \param сonst double pi - константа данная по условию
* \return объем конуса
*/

/**
* \brief Определение полной поверхности конуса
* \param double R - радиус конуса
* \param double a - угол при вершине в осевом сечении конуса
* \param double l - длина образующей конуса
* \return Полная поверхность конуса
*/
/**
* \brief Точка входа в программу
* \return Код ошибки(0 - успех)
*/
int main(int argc, const char)
{
	setlocale(LC_ALL, "Russian");
	float pi = 3.14;
	int R, result1, result2, l;
	cout << "Введите радиус -";
	cin >> R;
	//Находим объем конуса по формуле V=Pi*R^2
	result1 = pi * pow(R, 2);
	cout << "Объем равен -" << pi << "*" << pow(R, 2) << "=" << result1 << "\n";
	//Найдем полную площадь поверхности конуса 
	cout << "Введите длину образующей -";
	cin >> l;
	result2 = pi * R * l;
	cout << "Полная поверхность конуса равна -" << pi << "*" << pow(R, 2) << "+" << pi << "*" << R << "*" << l << "=" << result2;
	cin.get();
	return 0;
}
