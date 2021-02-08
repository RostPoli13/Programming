#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

/**

 * @file lab65.c
 * @brief Файл с пятым заданием лабораторной работы №6
 * "Дано двомерный масив NxN целых чисел.Выполнить цикличное смещение елементов строки масива в направлении справа влево"
 * @author Polizhay Rostyslav.
 * @date 29-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция заполнения масива заданой длинны числами и цикличного его смещения справа влево
 * @param Одно целое число
 * @return Логичный ответ выводим в консоль
*/

void matrixShift(const int N){
    int main[N][N];

    //Заполняем масив случайными числами
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            main[i][j] = rand() % 10;
        }
    }

    //Вывод начального масива
    printf("%s","Исходная матрица: ");
    printf("\n");
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", main[i][j]);
        }

        printf("\n");
        
    }
    
    printf("\n");
    printf("%s","Сдвинутая матрица: ");
    printf("\n");
    printf("\n");

    int resmain[N][1];

    
    for (int i = 0; i < N; i++) {
        resmain[i][0] = main[i][0];
    
    }


    //Смещаем
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            main[j][i] = main[j][i + 1];
        }

    }
    
    //Заносим обратно в масив
    for (int i = 0; i < N; i++) {
        main[i][N - 1] = resmain[i][0];
    }

    //Выводим
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", main[i][j]);
                   
        }

     printf("\n");

    }
    
    
}

int main(){

    matrixShift(rand()%10);

    return 0;
    
}


