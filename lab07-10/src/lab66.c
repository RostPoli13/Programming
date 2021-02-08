#include <stdio.h>
#include <stdlib.h>

/**

 * @file lab66.c
 * @brief Файл с шестым заданием лабораторной работы №6
 * "Дано двомерный масив NxN целых чисел.Умножить матрицу саму на себя."
 * @author Polizhay Rostislav.
 * @date 30-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция заполнения масива заданой длинны числами и его умножение самого на себя за правилом умножения матриц
 * @param Одно целое число 
 * @return Логичный ответ в консоль

*/


void multiplyMatrix(const int N){

    int mas[N][N];
    int res[N][N];
    //Заполняем массив
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mas[i][j] = rand() % 10;
        }
    }
    
    
    //Выводим массива 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", mas[i][j]);
            printf(" ");
        }printf("\n");
        printf("\n");
    }
    printf("\n");
   
   //Умножение
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int  j = 0; j < N; j++)
        {
            for (int q = 0; q < N; q++)
            {
                sum = sum + mas[q][i] * mas[j][q];



            }
            res[j][i] = sum;
            sum = 0;
        }
    }


    //Вывод результата
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", res[i][j]) ;
        }printf("\n");
        printf("\n");
    }


}

int main()
{
    //Выводим ф-цию
    multiplyMatrix(3);
   
    return 0;

}
