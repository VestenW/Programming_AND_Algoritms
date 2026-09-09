#include <iostream>

using namespace std;

//Перевести секунды в часы, минуты, секунды.


int main()
{
    //Создаём пременные как int, так как делить надо целочисленно
    int Seconds;
    int Minutes;
    int Hours;

    //Запрашиваем число и находим его квадрат
    cout << "Введите количество секунд: " << std::endl;
    cin >> Seconds;
    Minutes = Seconds % 60;

    //Выводим число
    cout << "Квадрат числа " << Seconds << " равен " << Minutes;
}
