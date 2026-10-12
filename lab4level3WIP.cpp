#include <iostream>
#include <string>


//Морской бой (упрощённый): по введённым координатам (буква A-J, число 1-10) определить, попал ли в корабль (заранее заданная расстановка из 3 кораблей)

int main() {
    char bukva;
    int cislo;

    //Запрашиваем букву
    std::cout << "===== МОРСКОЙ БОЙ =====" << std::endl;
    std::cout << "1. ВВЕДИТЕ БУКВУ от A до J" << std::endl;
    std::cin >> bukva;
    std::cout << "2. ВВЕДИТЕ ЧИСЛО от 1 до 10" << std::endl;
    std::cin >> cislo;

    //Соответственно конвертируем
    if (strcmp(bukva, "A") == 0)
    {
        std::cout << bukva + cislo;
    }
    return 0;
}
