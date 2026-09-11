#include <iostream>


//"Êâàäðàò ÷èñëà"
int main()
{
    setlocale (LC_CTYPE, "Russian"); //êèðèëèöà íåêîððåêòíî îòîáðàæàåòñÿ áåç ýòîé êîìàíäû
    double number{10};
    std::cout << "Êâàäðàò ÷èñëà " << number << " = " << number * number; //ñ÷èòàåì êâàäðàò óìíîæåíèåì ÷èñëà íà ñàìî ñåáÿ è âûâîäèì
    return 0;
}
