#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;


//Перевести секунды в часы, минуты, секунды. 


int main() {

    //создаём переменные int, так как делить надо целочисленно

    int Seconds;
    int Minutes;
    int Hours;

    bool validInput{false}; 

    
    



    while (!validInput)     //ждём пока пользователь введёт подходящее число
    {
        cout << "Введите количество секунд " << endl;   //Запрашиваем число и находим минуты и часы
        cin >> Seconds;

        if (cin.fail() || Seconds < 0)
        {
            cout << "Неправильный ввод, нужно положительное число" << endl;
            std::cout << std::flush;
            cin.clear();
            cin.ignore (10, '\n');    //несколько попыток сбросить буфер
        }
        else
        {
            validInput = true;
        }
    }




    Minutes = Seconds / 60;
    Hours = Seconds / 3600;

    //Выводим числа

    cout << "Целых минут:  " << Minutes  << endl;
    cout << "Целых часов:  " << Hours  << endl;


    return 0;
}
