#include <iostream>
#include <string>

int main() {
    int choice;
    int budget;

    //Спрашиваем что нужно пользователю
    std::cout << "===== КОНВЕРТЕР ДЕНЕГ =====" << std::endl;
    std::cout << "1. USD -> RUB" << std::endl;
    std::cout << "2. RUB -> USD" << std::endl;
    std::cout << "3. EUR -> RUB" << std::endl;
    std::cout << "4. RUB -> EUR" << std::endl;
    std::cin >> choice;

    //Запрашиваем сумму
    std::cout << "Введите сумму:" << std::endl;
    std::cin >> budget;

    //Соответственно конвертируем
    switch (choice)
    {
        case 1: //доллар в рубль
            std::cout << budget << " долларов = " << budget * 80 << " рублей";
            break;
        case 2: //рубль в доллар
            std::cout << budget << " рублей = " << budget / 80 << " долларов";
            break;
        case 3: //евро в рубль
            std::cout << budget << " евро = " << budget * 115 << " рубли";
            break;
        case 4: //рубль в евро
            std::cout << budget << " рублей = " << budget / 115 << " евро";
            break;
        default:
            std::cout << "Нужно ввести число от 1 до 4";
    }
    return 0;
}
