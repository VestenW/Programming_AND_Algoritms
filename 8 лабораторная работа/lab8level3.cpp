#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <string>
#include <sstream> // для std::stringstream
#include <algorithm> // для std::reverse



int main()
{

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8); //кириллица


  std::string a = "listen";
  std::string b = "silent"; // заготовленные строки
  

  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end()); // сортируем строки по символам



  if (a == b) //сравниваеи на анграмму
  {
    std::cout << "Анаграммы\n";
  } 
  else 
  {
    std::cout << "Не анаграммы\n";
  }
  return 0;
}