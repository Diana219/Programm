#include <iostream>
#include <cstdlib>
 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 0, chois;
	if (size % 2 == 0)
	{
		cout << "Введите размер массива, нечётное число - ";
		cin >> size;
	}
	int* mas = new int[size];
	cout << "Выберете способ заполнения:  1 - заполнить вручную    2 - случайные числа \n";
	cin >> chois;
	if (chois == 1)
	{
		cout << "Введите значения от -20 до 40 \n";
		for (int i = 0; i < size; i++)
		{
			cin >> mas[i];
		if (mas[i] > 40 || mas[i] < -20)
			{
				cout << "Введите значение от -20 до 40";
				i--;
			}
		}
	}
else
	{
		for (int i = 0; i < size; i++)
		{
			mas[i] = rand() % 61 - 20;
		}
	}
	for (int i = 0; i < size; i++)
		cout << mas[i] << "; ";
//Находим минимальный элемент массива
	int min_mas = 40, k;
	int n = (size + 1) / 2;
	for (int i = 0; i < size; i++)
	{
//Если этот элемент массива меньше чем минимальное значение, то ему и присвоим значение массива
		if (mas[i] < min_mas)
		{
			min_mas = mas[i];
			k = i;
		}
	}
	cout << "Минимальный элемент массива с номером" << k << "был = " << mas[k] << ", ";
	mas[k] = mas[n];
	cout << " а стал равен - " << mas[k] << "\n";

	cout << "\n номера элементов, которые больше предыдущих: ";
	for (int i = 1; i < size; i++)
	{
		if (mas[i] > mas[i - 1])
			cout << i << "\n ";
	}

	for (int i = 1; i < size; i++)
	if ((mas[i - 1] < 0 && mas[i] < 0) || (mas[i - 1] > 0 && mas[i] > 0))
		{
			cout << "\n Существует пара элементов с одинавковыми знаками ";
			// break;
			cout << mas[i - 1] << " и " << mas[i] << "\n";
		}
	return 0;
}
