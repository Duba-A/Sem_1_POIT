#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    double r, p, q;
    char c1, c2, c3;
    cout << "Введите радиус шара: ";
    cin >> r;
    cout << "Введите диагонали ромбообразного отверстия в формате (p, q): ";
    cin >> c1 >> p >> c2 >> q >> c3;
    if (c1 != '(' || c2 != ',' || c3 != ')' || p < 0 || q < 0) {
        cout << "Ошибка ввода диагоналей ромбообразного отверстия" << endl;
        return 0;
    }
    double d = 2 * r;
    if (d <= p && d <= q) {
        cout << "Шар пройдет через ромбообразное отверстие" << endl;
    }
    else {
        cout << "Шар не пройдет через ромбообразное отверстие" << endl;
    }
    return 0;
}
