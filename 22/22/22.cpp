#include <iostream>

using namespace std;

/*
* Задача 22.
* Рассчитать значение z=modd(x)-modd(y) определив и использовав функцию modd(a) равную
* modd(a) при a>=0, modd(a) = -a при a<0.
*/

//функция modd(a)
double modd(double a)
{
    if (a >= 0) return a;
    else return -a;
}

int main()
{
    //подключение русского языка
    setlocale(LC_ALL, "Russian");

    //объявление переменных
    double x, y, z;

    //ввод данных
    cout << "Введите X" <<endl;
    cin >> x;
    cout << "Введите Y" <<endl;
    cin >> y;

    //подсчёт z через функцию modd(a)
    z = modd(x) - modd(y);

    //вывод данных
    
    cout << "Результат Z" << endl; 
    cout <<z;
}