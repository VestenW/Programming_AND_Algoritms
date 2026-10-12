#include <iostream>
#include <string>


//Морской бой (упрощённый): по введённым координатам (буква A-J, число 1-10) определить, попал ли в корабль (заранее заданная расстановка из 3 кораблей)

// Корабли маленькие, координаты A1, C3, E9

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
    if (bukva == 'A' && cislo == 1)
    {
        std::cout << bukva << cislo << " - попадание!";
    }
    else if (bukva == 'C' && cislo == 3)
    {
        std::cout << bukva << cislo << " - попадание!";
    }
    else if (bukva == 'E' && cislo == 9)
    {
        std::cout << bukva << cislo << " - попадание!";
    }
    else if (int(bukva) > 'J' || int(bukva) < 'A' || cislo > 10 || cislo < 1)
    {
        std::cout << "Нужно ввести букву A-J и цифру 1-10";
    }
    else
    {
        std::cout << "Промах, попробуйте еще раз";
    }
    return 0;
}