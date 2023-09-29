#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int height = 5; // высота трапеции
    int width = 25; // ширина трапеции
    char Char; // символ для заполнения трапеции

    // вычисляем количество пробелов, необходимых для центрирования трапеции в консольном окне
    int spaces = (80 - width) / 2;

    // ввод символа для заполнения трапеции
    cout << "Введите символ для заполнения трапеции: ";
    cin >> Char;

    // рисуем трапецию с помощью цикла for
    for (int i = 0; i < height; i++) {
        // рисуем пробелы для центрирования трапеции
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // рисуем символы для заполнения трапеции
        for (int j = 0; j < width; j++) {
            cout << Char;
        }
        cout << endl;

        // изменяем ширину и количество пробелов для следующей строки
        width -= 2;
        spaces++;
    }

    return 0;
}
