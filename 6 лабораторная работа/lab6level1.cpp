#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int SIZE = 10; // Размер массива (константа)
    int arr[SIZE];      // Объявление массива
    int sum = 0;

    // ========== ИНИЦИАЛИЗАЦИЯ ГЕНЕРАТОРА СЛУЧАЙНЫХ ЧИСЕЛ ==========
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // static_cast<unsigned> - явное приведение типа time_t к unsigned

    // ========== ЗАПОЛНЕНИЕ СЛУЧАЙНЫМИ ЧИСЛАМИ ОТ 0 ДО 99 ==========
    std::cout << "Генерация " << SIZE << " случайных чисел..." << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = std::rand() % 61 - 30; // число от -30 до 30 включительно
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



    //находим отрицательнные числа
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            sum++;
        }
    }
    std::cout << "Отрицательных элементов: " << sum << std::endl;

    return 0;
}