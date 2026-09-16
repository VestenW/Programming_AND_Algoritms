#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

//"Вычислить квадрат числа x"
int main()
{
    setlocale (LC_CTYPE, "Russian"); //кирилица некорректно отображается без этой команды

    double number;

    //Запрашиваем число и находим его квадрат
    cout << "Введите число" << "\n";
    cin >> number;

    if (cin.fail())
    {
        cout << "Нужно число" << "\n";
        return 1;
    }

    std::cout << "Квадрат числа " << number << " = " << number * number; //считаем квадрат умножением числа на само себя и выводим
    return 0;
}