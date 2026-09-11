#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;

//Запросить число, вывести его квадрат и куб
int main()
{
    setlocale (LC_CTYPE, "Russian"); //кирилица некорректно отображается без этой команды

    double UserNumber; //обозначаем переменную
    cout << "Введите число: "; //запрашиваем число
    cin >> UserNumber;

    cout << "Квадрат числа " << UserNumber << " это " << UserNumber * UserNumber << "\n"; //считаем квадрат умножением числа на само себя и выводим
    cout << "Куб числа " << UserNumber << " это " << UserNumber * UserNumber * UserNumber << "\n"; //выводим квадрат числа
    return 0;
}
