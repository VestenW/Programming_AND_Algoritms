#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()


// Функция для вывода матрицы
void printMatrix(const int matrix[][5], int rows, int cols, const std::string &title)
{
    std::cout << title << ":" << std::endl;


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << std::setw(5) << matrix[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int ROWS = 5;
    const int COLS = 5;

    int matrix[ROWS][COLS];
    int temp = 0;
    // Заполнение случайными числами
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = std::rand() % 101; // числа от 10 до 99
        }
    }
    printMatrix(matrix, ROWS, COLS, "Исходная матрица");


    std::cout << "==== ОТЗЕРКАЛЕННАЯ ВЕРСИЯ ====" << std::endl;


    // ========== ЗЕРКАЛИМ СТРОКИ ==========
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < COLS; j++) 
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[4-i][j];
            matrix[4-i][j] = temp;
        }
    }
    printMatrix(matrix, ROWS, COLS, "Отзеркаленная матрица");



    std::cout << std::endl;


    return 0;
}