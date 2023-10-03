#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int a;
    cout << "Выберите карту, которую хотите поменять: " << endl;
    cout << "1. Карта 1" << endl;
    cout << "2. Карта 2" << endl;                       //объявляем переменную и начинаем диалог, записывая a.
    cout << "3. Карта 3" << endl;
    cout << "4. Карта 4" << endl;
    cout << "5. Карта 5" << endl;
    cin >> a;

    switch (a) {         //с помощью оператора switch сравниваем значения case
    case 1:
        cout << "Вы выбрали Вальта пику" << endl;      //в случае равенства значений выводим нужный текст диалога
        break; //прерываем операцию.
    case 2:
        cout << "Вы выбрали Бубновый туз" << endl;
        break;
    case 3:
        cout << "Вы выбрали Шесть чирва" << endl;
        break;
    case 4:
        cout << "Вы выбрали 2 крести" << endl;
        break;
    case 5:
        cout << "Вы выбрали Даму пика" << endl;
        break;
    default:              //если не были введены верные значения 1-5, то используем default
        cout << "Некорректный выбор" << endl;
        break;
    }

    return 0;
}