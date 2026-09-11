#include <iostream>


//" вадрат числа"
int main()
{
    setlocale (LC_CTYPE, "Russian"); //кирилица некорректно отображаетс€ без этой команды
    double number{10};
    std::cout << " вадрат числа " << number << " = " << number * number; //считаем квадрат умножением числа на само себ€ и выводим
    return 0;
}
