#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char Char; // объявляем переменную
    cout << "Введите символ для заполнения: ";
    cin >> Char; // вводим символ

    for (int i = 0; i < 5; i++) {
       
        cout << endl;                        // Рисуем квадрат с помощью цикла for

        for (int j = 0; j < 10; j++) {
            cout << Char;      

        } 
    }
}
