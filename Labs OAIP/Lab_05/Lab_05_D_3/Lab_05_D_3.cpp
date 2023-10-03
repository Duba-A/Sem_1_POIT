#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int a, b, p, q, r, s;
    char c1, c2, c3, c4, c5, c6;
    cout << "Введите размеры участка застройки в формате (a, b): ";
    cin >> c1 >> a >> c2 >> b >> c3;
    if (c1 != '(' || c2 != ',' || c3 != ')' || a < 1 || b < 1) {
        cout << "Ошибка ввода размеров участка застройки" << endl;
        return 0;
    }
    cout << "Введите размеры первого дома в формате (p, q): ";
    cin >> c4 >> p >> c5 >> q >> c6;
    if (c4 != '(' || c5 != ',' || c6 != ')' || p < 1 || q < 1) {
        cout << "Ошибка ввода размеров первого дома" << endl;
        return 0;
    }
    cout << "Введите размеры второго дома в формате (r, s): ";
    cin >> c4 >> r >> c5 >> s >> c6;
    if (c4 != '(' || c5 != ',' || c6 != ')' || r < 1 || s < 1) {
        cout << "Ошибка ввода размеров второго дома" << endl;
        return 0;
    }
    if ((p + r <= a && max(q, s) <= b) || (q + s <= b && max(p, r) <= a)) {
        cout << "Два дома можно разместить на участке застройки" << endl;
    }
    else {
        cout << "Два дома нельзя разместить на участке застройки" << endl;
    }
    return 0;
}
