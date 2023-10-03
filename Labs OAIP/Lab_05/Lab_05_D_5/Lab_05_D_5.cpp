#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int a, b, c, r, s, t;
    char c1, c2, c3, c4;
    cout << "Введите размеры коробки в формате (a, b, c): ";
    cin >> c1 >> a >> c2 >> b >> c3  >> c >> c4;
    if (c1 != '(' || c2 != ',' || c3 != ',' || c4 != ')' || a < 1 || b < 1 || c < 1) {
        cout << "Ошибка ввода размеров коробки" << endl;
        return 0;
    }
    cout << "Введите размеры посылки в формате (r, s, t): ";
    cin >> c1 >> r >> c2 >> s >> c3 >> t >> c4;
    if (c1 != '(' || c2 != ',' || c3 != ',' || c4 != ')' || r < 1 || s < 1 || t < 1) {
        cout << "Ошибка ввода размеров посылки" << endl;
        return 0;
    }
    if (a <= r && b <= s && c <= t || a <= r && b <= t && c <= s || a <= s && b <= r && c <= t || a <= s && b <= t && c <= r || a <= t && b <= r && c <= s || a <= t && b <= s && c <= r) {
        cout << "Коробку можно упаковать в посылку" << endl;
    }
    else {
        cout << "Коробку нельзя упаковать в посылку" << endl;
    }
    return 0;
}