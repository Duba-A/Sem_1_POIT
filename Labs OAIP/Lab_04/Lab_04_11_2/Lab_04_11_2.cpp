﻿#include <iostream>;
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	float h, a, S;                             //объявляем переменные
	cout << "Введите высоту прямоугольника: ";
	cin >> h;                                  //в решении этой задачи требуется только высота

	a = h * 2;                          //с помощью формул находим основание и площадь
	S = a * h;

	cout << "Основание прямоугольника: " << a << endl;               //выводим полученные данные
	cout << "Площадь прямоугольника: " << S << endl;

	return 0;
}