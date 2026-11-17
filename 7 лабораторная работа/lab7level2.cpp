#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()


// Функция для вывода матрицы
void printMatrix(const int matrix[4][5], int rows, int cols, const std::string &title)
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

    const int ROWS = 4;
    const int COLS = 5;
    int MINIM = 500;
    int minColN = 0;
    int matrix[ROWS][COLS];
    // Заполнение случайными числами
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = std::rand() % 100; // числа от 10 до 99
        }
    }
    printMatrix(matrix, ROWS, COLS, "Исходная матрица");

    // ========== СУММА ПО СТОЛБЦАМ ==========
    std::cout << "Суммы по столбцам:" << std::endl;
    for (int j = 0; j < COLS; j++)
    {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++)
        {
            colSum += matrix[i][j];
        }
        std::cout << " Столбец " << j << ": " << colSum << std::endl;
        if (colSum < MINIM)
        {
            MINIM = colSum;
            minColN = j;
        }
    }

    std::cout << "Минимальная сумма элементов равна " << MINIM << " в столбце " << minColN;

    std::cout << std::endl;
    return 0;
}