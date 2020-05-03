﻿#include <iostream>

using namespace std;


/*
* Задача 5.
* Известны данные о количестве осадков, выпавших за каждый месяц года.
* Найти общее число осадков, выпавших в марте, июне, сентябре и декабре.
*/

int main()
{
	// подключение русского языка
	setlocale(LC_ALL, "Russian");

	//объявление переменных
	int sum = 0, i, mounth;

	//оъявление массива
	int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	//ввод данный для каждого месяца														
	for (int i= 0; i < 12; i++) {
		cout << "Введите кол-во осадков, выпавших за " << a[i] << " месяц года" << endl;
		cin >> a[i];
	}

	//нахождение общего числа осадков в 3, 6, 9 и 12 месяце
	for (mounth = 2; mounth < 12; mounth += 3) {
		sum += a[mounth];
	}

	//вывод общего числа
	cout << sum;
}