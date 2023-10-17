#include <iostream>;
#include <cmath>;

void main() {
    float t = 6.96 * pow(10, -5), y = 2, i = 1, x = 0.9, z, q;    //объявляем переменные
    setlocale(LC_CTYPE, "Russian");
    while(i < 2.1) {   //используем цикл while
        z = t * pow(y, 2) - sqrt(i + x) * tan(y); //вычисляем переменные по формулам
        q = sqrt(pow(z, 2) + 5 * z) * log(y);
        std::cout << "Значение z для итерации " << i << ": " << z << std::endl; //поочерёдно выводим результат
        std::cout << "Значение q для итерации " << i << ": " << q << std::endl;
        i = i + 0.2; //Делаем шаг в цикле
    }
}