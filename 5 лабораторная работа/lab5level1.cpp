#include <iostream>
#include <iomanip> // для std::setw, std::fixed, std::setprecision
#include <cmath>   // для математических функций
#include <Windows.h> // для кирилицы


//Табуляция простой функции на интервале [a, b] с шагом h при константе 7

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8); // чтобы терминал показывал кирилицу


    double a, b, h; // a - начало интервала, b - конец, h - шаг
    // Ввод параметров с проверкой
    std::cout << "Введите начало интервала a: ";
    std::cin >> a;
    std::cout << "Введите конец интервала b: ";
    std::cin >> b;
    std::cout << "Введите шаг h: ";
    std::cin >> h;
    // Проверка корректности ввода
    if (a > b)
    {
        std::cout << "Ошибка: начало интервала не может быть больше конца!" << std::endl;
        return 1;
    }
    if (h <= 0)
    {
        std::cout << "Ошибка: шаг должен быть положительным!" << std::endl;
        return 1;
    }
    // Вывод шапки таблицы
    std::cout << "\n=========================" << std::endl;
    std::cout << " x       |       y = 7 " << std::endl;
    std::cout << "=========================" << std::endl;
    // Настройка форматирования вывода
    std::cout << std::fixed << std::setprecision(4);
    // Цикл табуляции: от a до b с шагом h
    // Используем b + 1e-9 для учёта погрешности double
    for (double x = a; x <= b + 1e-9; x += h)
    {
        double y = 7; // вычисляем значение функции
        std::cout << std::setw(8) << x << " | " << std::setw(12) << y << std::endl;
    }
    std::cout << "=========================" << std::endl;
    return 0;
}