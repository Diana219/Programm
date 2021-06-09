#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int day, month;
	setlocale(LC_ALL, "Russian");
	system("cls");
	cout << "Введите номер дня недели: ";
	cin >> day;
	switch (day)
	{
	case 1: cout << "понедельник"; break;
	case 2: cout << "вторник"; break;
	case 3: cout << "среда"; break;
	case 4: cout << "четверг"; break;
	case 5: cout << "пятница"; break;
	case 6: cout << "суббота"; break;
	case 7: cout << "воскресенье"; break;
	default: cout << "Неверно введен день недели"; break;
	}
	cout << "\n" << "Введите номер месяца:  ";
	cin >> month;
	switch (month)
	{
	case 1: cout << "январь"; break;
	case 2: cout << "февраль"; break;
	case 3: cout << "март"; break;
	case 4: cout << "апрель"; break;
	case 5: cout << "май"; break;
	case 6: cout << "июнь"; break;
	case 7: cout << "июль"; break;
	case 8: cout << "август"; break;
	case 9: cout << "сентябрь"; break;
	case 10: cout << "октябрь"; break;
	case 11: cout << "ноябрь"; break;
	case 12: cout << "декабрь"; break;
	default: cout << "Неверно введен номер месяца"; break;
	}
	cin.get(); cin.get();
	return 0;
}

