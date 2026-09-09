#include <iostream>

using namespace std;

//Вычислить квадрат числа x

int main()
{
    //Создаём пременные как double, чтобы не терять данные
    double x;
    double kvadratX;

    //Запрашиваем число и находим его квадрат
    cout << "Введите число: " << "\n";
    cin >> x;
    kvadratX = x * x;

    //Выводим число
    cout << "Квадрат числа " << x << " равен " << kvadratX;
}
