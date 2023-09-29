#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    float height, radius, area; //объявляем переменные
    const double Pi = 3.1415;

    cout << "Введите длину окружности: ";
    cin >> height; // вводим длинну окружности

    radius = height / (2 * Pi);  // вычисляем радиус из формулы l= 2 * Pi * R
    area = Pi * radius * radius; //вычисяем площадь круга по формуле

    cout << "Радиус круга: " << radius << endl; //выводим данные
    cout << "Площадь круга: " << area << endl;

    return 0;
}