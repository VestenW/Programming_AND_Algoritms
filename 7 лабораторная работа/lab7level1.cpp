#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()


// Функция для вывода матрицы
void printMatrix(const int matrix[3][5], int rows, int cols, const std::string &title)
{
    std::cout << title << ":" << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);



    const int ROWS = 3;
    const int COLS = 5;
    int counter = 0;
    int matrix[ROWS][COLS];
    // Заполнение случайными числами
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = -30 + std::rand() % 60; // числа от 10 до 99
            if (matrix[i][j] > 0)
            {
                counter++;
            }
        }
    }
    printMatrix(matrix, ROWS, COLS, "Исходная матрица");
    std::cout << "Количество положительных элементов: " << counter << std::endl;
    return 0;
}