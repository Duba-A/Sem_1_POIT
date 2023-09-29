#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    char Char; // объявляем переменную
    cout << "Введите символ для заполнения: ";
    cin >> Char; // вводим символ

    cout << " " << Char << " " << endl;
    cout << Char << Char << Char << endl; //рисуем типа человечка
    cout << " " << Char << " " << endl;
    cout << " " << Char << " " << endl; 
    cout << " " << Char << " " << endl;
    cout << Char << Char << Char << endl;
    cout << Char << " " << Char << endl;

}