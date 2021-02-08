#include <stdarg.h> 
#include <stdio.h> 

/**

 * @file supEx.c
 * @brief Файл с заданием на "отлично" лабораторной работы №7
 * "Реализовать ф-цию,что определяет,сколько среди заданой последовательности чисел таких пар,у которых первое число менше следующего,используя ф-цию с вариотивным кол-вом аргументов."
 * @author Polizhay Rostyslav.
 * @date 21-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция подсчета последовательности пар чисел,у которых первое число меньше след.
 * @param Одно целое число и бесконечно много других двозначных чисел
 * @return Переменная "с"

*/


double howMany(int count, ...) { 

    va_list ap; 
    int j; 
    
    va_start(ap, count);
    int c = 0;
   
    for (j = 0; j < count; j++) { 

        int fN = va_arg(ap, int)%10;
        int sN = (va_arg(ap, int) - fN)/10;

        if(fN>sN) {
            c++;
        }
    } 

    va_end(ap); 

    return c; 
    
} 
    
int main() { 
    double result = howMany(10, 12, 13, 14, 15, 16, 34, 65, 67, 87);    

    printf("%f\n", result); 

    return 0;

} 
