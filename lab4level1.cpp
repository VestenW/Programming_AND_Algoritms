#include <iostream>
#include <string>

int main() {
    int Dice;
    //Запрашиваем число
    std::cout << "Введите число:" << "\n";
    std::cin >> Dice;

    //Выводим соответствующее значение
    switch (Dice)
    {
        case 1:
            std::cout << "One";
            break;
        case 2:
            std::cout << "Two";
            break;
        case 3:
            std::cout << "Three";
            break;
        case 4:
            std::cout << "Four";
            break;
        case 5:
            std::cout << "Five";
            break;
        case 6:
            std::cout << "Six";
            break;
        default:
            std::cout << "Нужно число от 1 до 6";
    }
    return 0;
}
