#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы
#include <string>
#include <limits>
#include <vector>


//класс студента
class Student 
{
public:
  std::string name;
  int age;
  std::string group;

  Student(const std::string& name, int age, const std::string& group)
      : name(name), age(age), group(group) {}


  //Функция показа студента
  void print() const 
  {
    std::cout << "Имя: " << name
              << ", возраст: " << age
              << ", группа: " << group << '\n';
  }
};

//Функция добавления студента
void addStudent(std::vector<Student>& students) 
{
  //переменные для нового студеднта
  std::string name;
  std::string group;
  int age;

  //Пользователь вписывает данные студента
  std::cout << "Имя: ";
  std::getline(std::cin, name);

  std::cout << "Возраст: ";
  std::cin >> age;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "Группа: ";
  std::getline(std::cin, group);

  //сохраняем данные студента
  students.emplace_back(name, age, group);
}


//Функция показания студентов
void showStudents(const std::vector<Student>& students) 
{
    if (students.empty()) 
    {
      std::cout << "Список студентов пока пуст.\n";
      return;
    }

    for (const Student& student : students) 
    {
      student.print();//функция показа студента, сделанная в классе студента
    }
}



// Функция поиска по группе
void searchByGroup(const std::vector<Student>& students) 
{

  //Запрашиваем группу у пользователя
  std::string group;
  std::cout << "Введите группу для поиска: ";
  std::getline(std::cin, group);


  //флаг для неудачного случая нахождения
  bool found = false;


  //Идём по каждому студенту и сравниваем его группу с запрашиваемой
  for (const Student& student : students) 
  {
    if (student.group == group) 
    {
      student.print();
      found = true;
    }
  }

  //В случае ненахождения пишем об этом
  if (!found) 
  {
    std::cout << "Студенты такой группы не найдены.\n";
  }
}



int main()
{

  //Кириллица
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);


  //создаем начальный пустой список студентов
  std::vector<Student> students;
  int choice;

  //Спрашиваем у пользователя что ему надо
  do 
  {
    std::cout << "\n====СПИСОК СТУДЕНТОВ====\n"
              << "1. Добавить студента\n"
              << "2. Показать список\n"
              << "3. Найти по группе\n"
              << "0. Выход\n"
              << "Ваш выбор: ";

    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    //с помощью свитча обрабатываем ввод пользователя
    switch (choice) 
    {
      case 1:
          addStudent(students); //добавить студетна
          break;
      case 2:
          showStudents(students); // показать всех студентов
          break;
      case 3:
          searchByGroup(students); // показать студентов из группы
          break;
      case 0:
          std::cout << "Программа завершена.\n"; // завершение программы
          break;
      default:
          std::cout << "Такой команды нет\n"; //если ввел не то
    }
  } while (choice != 0); // повторяем цикл выбора пока пользователь не выйдет

  return 0;

}