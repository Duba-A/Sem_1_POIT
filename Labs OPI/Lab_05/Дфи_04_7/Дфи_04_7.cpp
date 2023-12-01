#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    double X, Y, Z, Q;

    cout << "Введите количество денег (X): ";
    cin >> X;

    cout << "Введите стоимость хлеба (Y): ";
    cin >> Y;

    cout << "Введите стоимость худи (Z): ";
    cin >> Z;

    cout << "Введите стоимость ручки (Q): ";
    cin >> Q;

    if (X > Y) {
        X = X - Y;

        if (X > Z) {
            X = X - Z;

            if (X > Q) {
                X = X - Q;
                cout << "Вы всё купили!" << endl;
            }
            else {
                cout << "Недостаточно средств." << endl;
            }
        }
        else {
            cout << "Недостаточно средств." << endl;
        }
    }
    else {
        cout << "Недостаточно средств." << endl;
    }

    return 0;
}