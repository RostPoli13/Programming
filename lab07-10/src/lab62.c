#include <stdio.h>
#include <stdbool.h>

/**

 * @file lab62.c
 * @brief Файл с вторым заданием лабораторной работы №6
 * "Заполнить масив с заданого кол-ва елементов простыми числами,что не повторяютсья.Размер входного масива задать известным значением,чтоможет быть бильшим чем результат кол-ва полученых елементов."
 * @author Polizhay Rostislav.
 * @date 28-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция заполнения масива заданой длинны простыми числами.
 * @param Одно целое число
 * @return Логичный ответ в консоль.

*/

void primeMass(int arrLength){
    
    //Обьявление массива и его длинны
    int arr[arrLength];
	
        int value = 1;

        for (int i = 0; i < arrLength; i++)
        {
         
            bool prime = true;
            
            do{
            
                ++value;
                
                for (int j = 0; j < i && arr[j] <= value / 2 && (prime = value % arr[j] != 0); ++j);
                
            } while (!prime);

            arr[i] = value;
            
        }

    //Выводим массив
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){

    //вызываем функцию с аргументом 6
    primeMass(6);

    return 0;
        
}


