#include <iostream>
#include <iomanip>
#include <Windows.h> // для кирилицы




double circleArea(double radius)
{
    return radius * radius * std::numbers::pi;
}

//Вычислить площадь круга double circleArea(double radius)
int main()
{
    double radius = 0;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Введите радиус: " << std::endl;
    std::cin >> radius;
    std::cout << "Площадь круга равна " << circleArea(radius) << std::endl;
    return 0;

}