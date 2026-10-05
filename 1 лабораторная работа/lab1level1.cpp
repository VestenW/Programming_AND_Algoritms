#include <iostream>
#include <locale.h>


//"Квадрат числа"
int main()
{
    setlocale (LC_CTYPE, "Russian"); //кирилица некорректно отображается без этой команды
    double number{10};
    std::cout << "Квадрат числа " << number << " = " << number * number; //считаем квадрат умножением числа на само себя и выводим
    return 0;
}
