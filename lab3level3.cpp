#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Решение квадратного уравнения ax^2 + bx + c = 0" <<
    std::endl;

    //Запршиваем числа
    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;
    if (std::cin.fail()) 
    {
        std::cout << "Ошибка: введите число!" << std::endl;
        std::cin.clear(); // сбрасываем флаг ошибки
        std::cin.ignore(32767, '\n'); // очищаем буфер ввода
    }
    

    // Определяем тип квадратного уравнения
    if (a == 0)
    {
        // Линейное уравнение bx + c = 0
        if (b == 0)
        {
            if (c == 0)
            {
                std::cout << "Бесконечное множество решений" << std::endl << "\n";
            }
            else 
            {
                std::cout << "Нет решений" << std::endl;
            }
        }
        else 
        {
            double x = -c / b;
            std::cout << "Линейное уравнение, корень: x = " << x << std::endl;
        }
    }

    else
    {
        double d = b * b - 4 * a * c; // дискриминант
        if (d < 0)
        {
            std::cout << "Действительных корней нет, но есть комплексные" << std::endl;
            std::cout << "Комплексные корни: x1 = " << a << "+(" << b << " * i)" << ", x2 = " << a << "-(" << b << " * i)" << std::endl;
        }
        else if (d == 0)
        {
            double x = -b / (2 * a);
            std::cout << "Один корень (кратный): x = " << x << std::endl;
        } 
        else 
        {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            std::cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
    }
    return 0;
}