#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char symbol_1, symbol_2;
    int choice, code_difference, symbol_3;

    cout << "Выберите вариант:\n";
    cout << "1. Определение разницы значений кодов в ASCII буквы в прописном и строчном написании\n";
    cout << "2. Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании\n";
    cout << "3. Вывод в консоль кода символа, соответствующего введенной цифре\n";
    cout << "4. Выход из программы\n";
    while (true) {
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Введите с клавиатуры заглавную букву латинского алфавита" << endl;
            cin >> symbol_1;
            cout << "Введите с клавиатуры строчную букву латинского алфавита" << endl;
            cin >> symbol_2;
            if (symbol_1 >= 'A' && symbol_1 <= 'Z' && symbol_2 >= 'a' && symbol_2 <= 'z')
            {
                code_difference = abs(symbol_2 - symbol_1);
                cout << "разницы значений кодов букв латинского алфавита в прописном и строчном написании равно = " << code_difference << endl;
            }
            else
            {
                cout << "Ошибка." << endl;
            }
            break;
        }

        case 2: {
            cout << "Введите с клавиатуры заглавную букву русского алфавита" << endl;
            cin >> symbol_1;
            cout << "Введите с клавиатуры строчную букву русского алфавита" << endl;
            cin >> symbol_2;
            if (symbol_1 >= 'А' && symbol_1 <= 'Я' && symbol_2 >= 'а' && symbol_2 <= 'я')
            {
                code_difference = abs(symbol_2 - symbol_1);
                cout << "разницы значений кодов букв русского алфавита в прописном и строчном написании равно = " << code_difference << endl;
            }
            else
            {
                cout << "Ошибка." << endl;
            }
            break;
        }

        case 3: {
            cout << "Введите с клавиатуры цифру" << endl;
            cin >> symbol_1;

            if (symbol_1 >= '0' && symbol_1 <= '9')
            {
                symbol_3 = (int)symbol_1;
                cout << "Вы ввели цифру с кодом " << symbol_3 << endl;
            }
            else
            {
                cout << "Ошибка." << endl;
            }
            break;
        }

        case 4: {
            exit(0);
        }

        default: {
            cout << "Введите вариант от 1 до 4" << endl;

            break;
        }
        }
    }
    return 0;
}