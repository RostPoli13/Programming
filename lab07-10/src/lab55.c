#include <stdio.h>
#include <stdlib.h>

/**

 * @file lab55.c
 * @brief Файл с пятым заданием лабораторной работы №5
 * "Без помощи внешних библиотек определить корень числа"
 * @author Rostyslav Polizhay
 * @date 26-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция определения кореня числа
 * @param Одно целое число
 * @return Значение переменной "result"

*/

float sqrtGiving(float a){
	float sqrt = 1.00f;
	float multiply;
	
 	while(a > multiply){
 	
 		multiply = sqrt * sqrt;
 	
 		sqrt+=0.01f;
 	}
 	

 	float sqrtF = sqrt*100.00f;
 	int sqrtInt = (int)sqrtF;
 	float sqrtI = (float)sqrtInt / 100.00f;
 	float sqrtFloat = (float) (sqrtI);
 	float result = sqrtFloat - 0.01f; 		//результат
	
	return result;
}

int main(){

	float sqrt = sqrtGiving((float)(rand()%10));

	printf("%f", sqrt);
	
}
