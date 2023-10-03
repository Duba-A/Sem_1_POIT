#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");

    float a, b, c;
    cout << "Введите a, b, c: ";      //объявляем и вводим значения переменных
    cin >> a >> b >> c;

    if (a < b && b < c) {    //выполняем первое условие при помощи условного оператора if
        a = c;
        b = c;
    }
    else if (a > b && b > c) { //выполняем второе условие если первое условие ложно, используем else if
        a = a * a;
        b = b * b;
        c = c * c;
    }
    cout << "Итоговые значения: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl; //выводим итоговые значения
}