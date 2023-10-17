﻿#include <iostream> 
#include <cmath>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "RUSSIAN");
	int n;       //объявляем переменные 
    double sum = 0, p;
    cout << "Введите количество лет : ";
	cin >> n;
	cout << "Введите процент уценки : ";//Запрашиваем и записываем значения переменных
	cin >> p;
	double* s = new double[n];//Создаём динамический массив,чтобы юзер мог выбирать сколько лет проводились закупки 

	for (int i = 0;i < n;i++)//Цикл который длится до того,пока созданная внутри него переменная i равная 0,меньше значения перменной n. 
	{
	cout << "Введите стоимость закупленного оборудования за " << i + 1 << " год : ";
	cin >> s[i];//Считываем значение массива s[i] с клавиатуры 
	sum += s[i];//Добавляем это значение к общей сумме 
	sum -= (sum * p) / 100;//Отнимаем от общей суммы уценку 
	}

	cout << "Стоимость оборудования после " << n << " лет : " << sum;   //Вывод данных

	delete[] s;//Удаляем динамический массив 
}