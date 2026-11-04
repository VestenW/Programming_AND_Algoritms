#include <iostream>
#include <iomanip> // для std::setw, std::fixed, std::setprecision
#include <cmath>   // для математических функций
#include <Windows.h> // для кирилицы


//Вычислить определённый интеграл методом левых прямоугольников: ∫ₐᵇ f(x)dx = h·(y₀ + y₁ + ... + yₙ₋₁)
//Придётся обучиться интегралам ради этого задания

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8); // чтобы терминал показывал кирилицу


    int changeCount = -1; // на 1 меньше, потому одно увеличение гарантированно
    int lastMinus = 0;
    int currentMinus = 0;

    double integral = 0.0;
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
    std::cout << "\n===================================" << std::endl;
    std::cout << " x       |       y = x^3 - 3x^2 + 2x " << std::endl;
    std::cout << "======================================" << std::endl;

    // Настройка форматирования вывода
    std::cout << std::fixed << std::setprecision(4);

    // Цикл табуляции: от a до b с шагом h
    // Используем b + 1e-9 для учёта погрешности double
    for (double x = a; x <= b + 1e-9; x += h)
    {
        double y = x * x * x - 3 * x * x + 2 * x; // вычисляем значение функции

        // проверка на знак функции
        if (y > 0){
            currentMinus = 1;
        }  
        else if (y == 0)
        {
            currentMinus = 0;
        }
        else{
            currentMinus = -1;
        }



        if (currentMinus != 0 && currentMinus != lastMinus)
        {
            changeCount++;
        }
        
        lastMinus = currentMinus;




        std::cout << std::setw(8) << x << " | " << std::setw(12) << y << std::endl;
    }
    std::cout << "=========================" << std::endl;
    std::cout << "Функция поменяла знак " << changeCount << " раза." << std::endl;



    // Интеграл методом левых прямоугольников
    for (double x = a; x < b; )
    {
        double dx = h;

        // Если до b осталось меньше шага, уменьшаем последний отрезок
        if (x + dx > b)
        {
            dx = b - x;
        }

        // Высота прямоугольника вычисляется в его левой точке x
        double y = x * x * x - 3 * x * x + 2 * x;
        integral += y * dx;

        x += dx;
    }

    // выводим значение интеграла
    std::cout << "Интеграл методом левых прямоугольников: " << integral << '\n';

    return 0;
}