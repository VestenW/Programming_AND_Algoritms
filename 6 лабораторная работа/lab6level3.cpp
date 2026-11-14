#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int SIZE = 50; // Размер массива (константа)
    int arr[SIZE];      // Объявление массива
    int sum = 0;
    int counter = 0;
    int zadan = 110; //заданное число

    // ========== ИНИЦИАЛИЗАЦИЯ ГЕНЕРАТОРА СЛУЧАЙНЫХ ЧИСЕЛ ==========
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // static_cast<unsigned> - явное приведение типа time_t к unsigned

    // ========== ЗАПОЛНЕНИЕ СЛУЧАЙНЫМИ ЧИСЛАМИ ОТ 0 ДО 99 ==========
    std::cout << "Генерация " << SIZE << " случайных чисел..." << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = std::rand() % 201; // число от 0 до 100
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



    //находим все пары элементов, сумма которых равна заданному числу
    std::cout << "Пары элементов, сумма которых равна заданному числу(110): " << std::endl;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] + arr[j] == zadan)
            {
                counter++;
                std::cout << arr[i] << " + "  << arr[j] << std::endl;
            }
        }
    }




    std::cout << "Количество пар элементов, сумма которых равна заданному числу(110): " << counter << std::endl;

    return 0;
}