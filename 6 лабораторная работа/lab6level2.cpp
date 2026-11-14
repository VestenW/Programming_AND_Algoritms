#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int SIZE = 20; // Размер массива (константа)
    int arr[SIZE];      // Объявление массива
    int sum = 0;
    int counter = 0;

    // ========== ИНИЦИАЛИЗАЦИЯ ГЕНЕРАТОРА СЛУЧАЙНЫХ ЧИСЕЛ ==========
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // static_cast<unsigned> - явное приведение типа time_t к unsigned

    // ========== ЗАПОЛНЕНИЕ СЛУЧАЙНЫМИ ЧИСЛАМИ ОТ 0 ДО 99 ==========
    std::cout << "Генерация " << SIZE << " случайных чисел..." << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = std::rand() % 101; // число от 0 до 100
    }

    // ========== ВЫВОД МАССИВА ==========
    std::cout << "\nСгенерированный массив:" << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << std::setw(4) << arr[i];
        if ((i + 1) % 10 == 0)
        { // каждые 10 элементов — перенос строки
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;



    //находим сумму
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }



    // ========== ВЫЧИСЛЕНИЕ СРЕДНЕГО АРИФМЕТИЧЕСКОГО ==========
    // ВАЖНО: используем static_cast<double> для вещественного деления
    double average = static_cast<double>(sum) / SIZE;



    //находим числа больше среднего
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > average)
        {
            counter++;
        }
    }

    std::cout << "Среднее арифмитическое: " << average << std::endl;
    std::cout << "Элементов больше среднего: " << counter << std::endl;

    return 0;
}