#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
* Задача 17.
* Дан челочисленный квадратный массив 10x10.
* Найти сумму элементов каждой строки.
*/

int main()
{
    setlocale(LC_ALL, "Russian");

    //объявление массива
    const int MatrixSize = 10;
    int ourMatrix[MatrixSize][MatrixSize] = {};
    int rowSum[MatrixSize] = {}; // для записи сумм в строках

    srand(time(NULL));

    //заполнение массива случайными числами (автоматический ввод) и его вывод на экран 
    for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
    {
        cout << rowNum <<" | ";
        for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
        {
            ourMatrix[rowNum][columnNum] = rand();
            cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
        }
        cout << endl;
    }

    // подсчет суммы отдельно в каждой строке
    for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
    {
        for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
        {
            rowSum[rowNum] += ourMatrix[rowNum][columnNum];
        }
    }

    // вывод суммы каждой строки
    cout << "\nСумма по строкам!\n";
    for (int i = 0; i < MatrixSize; i++)
    {
        cout << i + 1 << "-я строка: " << rowSum[i] << endl;
    }

    cout << endl << endl;

}