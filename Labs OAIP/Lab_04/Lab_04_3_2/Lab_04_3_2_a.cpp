#include <iostream>;
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");

	float a, b; //обьявляем основные переменные
	float c = 0; //объявляем дополнительную переменную

		cout << "Введите число a: ";
		cin >> a;                       //вводим числа
		cout << "Введите число b: ";
		cin >> b;

		c = a;
		a = b;   //меняем местами числа
		b = c;

		cout << "Число а: " << a << endl;
		cout << "Число b: " << b << endl;   // выводим получившиеся переменные
}