#include <iostream>
using namespace std;
/**
* \brief Вычисление пути
* \param F - сила тяги
* \param A - работа
* \param S - путь
*/

/**
* \brief точка входа в программу
* \return Код ошибки(0 - успех)
*/

int main()
{
    setlocale(LC_ALL, "Russian");
    int F, A, result;
    cout << "Введите значение силы -";
    cin >> F;
    cout << "Введите значение работы -";
    cin >> A;
    //S=F*A
    result = F * A;
    cout << "S =" << F << "*" << A << "=" << result;
    cin.get();
    return 0;
}

