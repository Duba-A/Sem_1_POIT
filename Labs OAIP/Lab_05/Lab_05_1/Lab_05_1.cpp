#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int y;
    cout << "Введите год: "; //объявляем переменную и вводим год
    cin >> y;

    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
        cout << "Год " << y << " Является високосным" << endl; //вычисляем явяется ли год выскосным, используем оператор if
    }
    else {
        cout << "Год " << y << " Не является високосным" << endl; //в случае ложной операции if используем else.
    }

    return 0;
}