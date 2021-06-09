#include <iostream>
#include <cmath>

using namespace std;

const int a = 20.3; // инициализация константы
double x, y;   // инициализация переменных
void input() //функция ввода
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите x = ";
	cin >> x;
}
void solution() //функция поиска решений
{
	if (x > 1)
	{
		y = (log(x + 1));
		cout << "Значение y равно " << y << endl;
	}
	else
	{
		y = (sin(sqrt(abs(a * x))));
		cout << "Значение y равно " << y << endl;
	}
}
int main()
{
	input();

	solution();

	return 0;
}

