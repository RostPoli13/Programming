#include <stdio.h>

/**

 * @file lab54.c
 * @brief Файл с четвертым заданием  лабораторной работы №5
 * "Определить,есть ли число совершенным "
 * @author Rostyslav Polizhay.
 * @date 26-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция проверки числа на совершенность
 * @param Одно целое число
 * @return Значение переменной "result"

*/

char * isPerfect(int a){
	int del = 1;
	int number = 0;
	char * result;
	
 	while (del<a){
 	
 		if(a%del == 0){
 		
 			number += del;
 		
 		}
 		
 		del++;
 	
 	}
	
	if(number == a){
	
		result = "Це досконале число!";
	
	}else{
	
		result = "Це не досконале число!";
	
	}
	
	return result;
}

int main(){
	
	//выведем результат
	char * result = isPerfect(28);

	printf("%s", result);
	
	return 0;
	
}
