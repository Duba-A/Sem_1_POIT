#include <iostream>
#include <string>
using namespace std;
void main() {
    setlocale(LC_CTYPE, "Rus");
    string number;     //объявлям переменную для числа типа str, чтобы иметь возможность разобрать его по цифрам
    cout << "Введите целое число: ";
    cin >> number;     //запрашиваем переменную

    string r ; //создаём переменную для записи результата
    for (char d : number) {  //с помощью цикла for находим в исходном числе 3 и 6 и удаляем их записывая результат
        if (d != '3' && d != '6') {
            r += d;
        }
    }

    cout << "Результат: " << r << endl;  //выводим результат в консоль.

    
}