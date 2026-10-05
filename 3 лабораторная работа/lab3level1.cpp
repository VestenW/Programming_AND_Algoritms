#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// объявляем переменные
const double EPSILON = 1e-9; // 10⁻⁹
float a = 0, b = 0;


int main() {
    // запрашиваем числа
    cout << "Введите два числа для сравнения:" << endl;
    cin >> a >> b;

    // Проверяем правильный ввод
    if (std::cin.fail()) {
    cout << "Ошибка: введите число!" << std::endl;
    cin.clear(); // сбрасываем флаг ошибки
    cin.ignore(32767, '\n'); // очищаем буфер ввода
    }


    else
    {
        // сравниваем числа
        if (fabs(a - b) < EPSILON) {
        cout << "Примерно равны" << endl;
        }
        else
        {
            cout << "Не равны" << endl;
        }
    }

    
    return 0;
}
