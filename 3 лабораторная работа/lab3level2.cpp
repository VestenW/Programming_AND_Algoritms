#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// объявляем переменные
float score = 0;


int main() {
    // запрашиваем число
    cout << "Введите количество баллов:" << endl;
    cin >> score;

    // Проверяем правильный ввод
    if (std::cin.fail() || score > 100 || score < 0) 
    {
        cout << "Ошибка: введите число от 0 до 100!" << std::endl;
        cin.clear(); // сбрасываем флаг ошибки
        cin.ignore(32767, '\n'); // очищаем буфер ввода
    }

    // Ставим оценку в зависимости от числа
    else
    {
        if (score >= 90) {
        std::cout << "А" << std::endl;
        } else if (score >= 75) {
        std::cout << "В" << std::endl;
        } else if (score >= 60) {
        std::cout << "С" << std::endl;
        } else if (score >= 50) {
        std::cout << "D" << std::endl;
        } else {
        std::cout << "F" << std::endl;
        }
    }
    

    
    return 0;
}
