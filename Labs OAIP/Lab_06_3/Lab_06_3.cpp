#include <iostream>
#include <cmath>

float t = 6.96 * pow(10, -5), y = 2, i = 2, x[3] = {0.7, -1, 9}, z, q; //объявляем переменные

void main() {
    setlocale(LC_CTYPE, "Russian");
    for (int i = 2; i < 3.1; i = i+0.2) { //используем первый цикл for для шага i от 2 до 3

        for (int j = 0; j < 3; j++) {  //используем второй цикл for для просчёта данных массива x 
            z = t * pow(y, 2) - sqrt(i + x[j]) * tan(y); //Вычисляем по формулам
            q = sqrt(pow(z, 2) + 5 * z) * log(y);
            std::cout << "Значение z для итерации " << j + 1 << ": " << z << std::endl;  //Поочерёдно выводим результат
            std::cout << "Значение q для итерации " << j + 1 << ": " << q << std::endl;
        }
        break; //Прерывыем цикл
    }
}