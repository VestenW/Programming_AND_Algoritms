#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <string>
#include <cctype>
#include <sstream> // для std::stringstream
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);


    // ========== ПОДСЧЁТ букв (через флаг) ==========
    int counter = 0;
    bool inWord = false;
    for (char c : text)
    {
      if (std::isalpha(c))
      {
        counter++;
      }
    }
    std::cout << "\nКоличество букав: " << counter << std::endl;
    return 0;
}