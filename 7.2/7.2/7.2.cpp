﻿#include <iostream>

using namespace std;

/*
* Задача 5.
* Дана последовательность чисел от 1 до N и число K(>1).
* Найти наибольшее целое среди последовательности чисел, при котором выполняется неравенство 3K > N, и само значение 3K
*/

int main()
{
    //подключение русского языка
    setlocale(LC_ALL, "Russian");

    //объявление переменных
    int N, K;
    bool B = false;

    //ввод чисел
    cout << "Введите число N" << endl;
    cin >> N;
    K = N;

    //нахождение числа
    do {
        K--;
        if ((3 * K) < N) {
            B = true;
        }
    } while (!B);

    //вывод
    cout << K <<endl;
}