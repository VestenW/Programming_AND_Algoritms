#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <string>



int digitSum(int n)
{
  int counter = 0;
  std::string Numb = std::to_string(n);
  for (char c : Numb)
  {
    counter += c - '0';
  }
  return counter;
  
}


int main()
{
    int n = 0;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Введите число: " << std::endl;
    std::cin >> n;
    std::cout <<"Сумма цифр в числ равна " << digitSum(n);

    return 0;

}