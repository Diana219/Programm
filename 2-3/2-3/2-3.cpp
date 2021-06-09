#include <iostream>

using namespace std;

void квадрат()
{
	cout << "S=a^2";
}
void тругольник()
{
	cout << "S=1/2*a*h";
}
void прямоугольник()
{
	cout << "S=a*b";
}
void ромб()
{
	cout << "S=a*h";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int input;

	cout << "1. Квадрат\n";
	cout << "2. Треугольник\n";
	cout << "3. Прямоугольник\n";
	cout << "4. Ромб\n";
	cout << "Введите цифру: ";
	cin >> input;
	switch (input) {
	case 1:
		квадрат();
		break;
	case 2:
		тругольник();
		break;
	case 3:
		прямоугольник();
		break;
	case 4:
		ромб();
		break;
	default:
		cout << "Error, bad input, quitting\n";
		break;
	}
	cin.get();
	return 0;

