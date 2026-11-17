#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <string>
#include <cctype>
#include <sstream> // для std::stringstream
#include <algorithm> // для std::reverse



// Функция для проверки, является ли строка палиндромом
// (учитывает только буквы и цифры, игнорирует регистр)
bool isPalindrome(const std::string &s)
{
  int left = 0;
  int right = s.length() - 1;
  while (left < right)
  {
    // Пропускаем символы, которые не являются буквами и цифрами
    while (left < right && !std::isalnum(s[left]))
    {
      left++;
    }
    while (left < right && !std::isalnum(s[right]))
    {
      right--;
    }
    // Сравниваем символы (без учёта регистра)
    if (std::tolower(s[left]) != std::tolower(s[right]))
    {
      return false;
    }
    left++;
    right--;
  }
  return true;
}


int main()
{
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);



  std::string original;
  std::cout << "Введите строку: ";
  std::getline(std::cin, original);


  // ========== РЕВЕРС СТРОКИ ==========
  std::string reversed = original;
  std::reverse(reversed.begin(), reversed.end());
  std::cout << "\nИсходная строка: \"" << original << "\"" << std::endl;
  std::cout << "Реверс: \"" << reversed << "\"" << std::endl;



  // ========== ПРОВЕРКА НА ПАЛИНДРОМ ==========
  if (isPalindrome(original))
  {
    std::cout << "\nСтрока является палиндромом!" << std::endl;
  }
  else
  {
    std::cout << "\nСтрока не является палиндромом." << std::endl;
  }
  // ========== ДЕМОНСТРАЦИЯ РУЧНОГО РЕВЕРСА == == == == ==
      std::string manualReverse = original;
  int len = manualReverse.length();
  for (int i = 0; i < len / 2; i++)
  {
    char temp = manualReverse[i];
    manualReverse[i] = manualReverse[len - 1 - i];
    manualReverse[len - 1 - i] = temp;
  }
  std::cout << "Ручной реверс: \"" << manualReverse << "\"" << std::endl;
  return 0;
  
}