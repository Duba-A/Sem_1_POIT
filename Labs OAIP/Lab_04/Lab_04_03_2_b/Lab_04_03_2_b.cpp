#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");

    int a, b;    //объявляем переменные
    std::cout << "Введите a: ";
    std::cin >> a;                         //вводим числа
    std::cout << "Введите b: ";
    std::cin >> b;

    a = a + b;
    b = a - b;                 //c помощью сложения и вычитания меняем числа местами
    a = a - b;
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;               //выводим числа

    
}