#include <iostream>
#include <locale.h>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//Прямоугольный треугольник: катеты -> периметр и площадь

int main()
{
    setlocale (LC_CTYPE, "Russian");    //кирилица некорректно отображается без этой команды

    double katet1;
    double katet2;
    double Perimetr;
    bool validInput{false};     //обозначаем некоторые переменные

    while (!validInput)     //ждём пока пользователь введёт подходящее число
    {
        cout << "Введите длину первого катета: " << endl;   //запрашиваем число
        cin >> katet1;

        if (cin.fail() || katet1 <= 0)
        {
            cout << "Неправильный ввод, нужно положительное число" << endl;
            std::cout << std::flush;
            cin.clear();
            cin.ignore (1000, '\n');    //несколько попыток сбросить буфер
        }
        else
        {
            validInput = true;
        }
    }


    validInput = false;



    while (!validInput)     //ждём пока пользователь введёт подходящее число2
    {
        cout << "Введите длину второго катета: " << endl;   //запрашиваем второе число
        cin >> katet2;

        if (cin.fail() || katet2 <= 0)
        {
            cout << "Неправильный ввод, нужно положительное число" << endl;
            std::cout << std::flush;
            cin.clear();
            cin.ignore (1000, '\n');
        }
        else
        {
            validInput = true;
        }
    }

    //находим гипотенузу
    double gipotenuza{sqrt(katet1 * katet1 + katet2 * katet2)};
    Perimetr = katet1 + katet2 + gipotenuza;
    cout << "Периметр треуголька равен " << Perimetr << "\n";
    cout << "Площадь треуголька равна " <<katet1 * katet2 / 2 << "\n"; // считаем и выводим площадь прямоугольного треугольника

    return 0;
}
