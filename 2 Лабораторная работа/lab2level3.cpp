#include <iostream>
#include <string>
#include <cmath> //для математических функций
#include <locale.h>


using std::cout;
using std::cin;
using std::endl;


//Вычислить sin, cos, tan для угла в градусах. Показать преобразование в радианы.


int main() {
    setlocale (LC_CTYPE, "Russian");

    //создаём переменную double, углы могут быть нецелыми
    double pi = 3.14159;

    double Angle;
    double Sin;
    double Cos;
    double Tan;
    double Rad;

    bool validInput{false}; 

    
    



    while (!validInput)     //ждём пока пользователь введёт подходящее число
    {
        cout << "Введите угол " << endl;   //Запрашиваем число и находим минуты и часы
        cin >> Angle;

        if (cin.fail() || Angle < 0)
        {
            cout << "Неправильный ввод, нужен положительный угол" << endl;
            std::cout << std::flush;
            cin.clear();
            cin.ignore (100, '\n');    //несколько попыток сбросить буфер
        }
        else
        {
            validInput = true;
        }
    }




    //Производим математические вычисления
    Sin = sin(Angle);
    Cos = cos(Angle);
    Tan = tan(Angle);
    Rad = Angle * pi / 180.0;


    //Выводим числа

    cout << "Синус:  " << Sin  << endl;
    cout << "Косинус:  " << Cos  << endl;
    cout << "Тангенс:  " << Tan  << endl;
    cout << "В радианах: " << Rad  << endl;



    return 0;
}
