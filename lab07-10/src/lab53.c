#include <stdio.h>
#include <stdlib.h>

/**

 * @file lab53.c
 * @brief Файл с 3м заданием лабораторной работы №5
 * "Определить,есть ли шестизначное число счастливым билетом"
 * @author Rostyslav Polizhay.
 * @date 26-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Функція перевірки двух частин 3-знаного числа на рівність між собою
 * @param Целое шестизначное число
 * @return Переменная "result"

*/

char * ticket(int x){
	int firstPart;
	int secondPart;

	for (int i = 1; i <= 4; i++){
	
		firstPart += x%10;
		x = x/10; 
	
	}

	for (int i = 1; i <= 4; i++){
	
		secondPart += x%10;
		x = x/10; 
	
	}
	
	char * result;
	
	if ((firstPart) == (secondPart)){
	
		result = "Lucky ticket!";
	
	}else{
	
		result = "Unlucky ticket";
	
	}
	
	return result;
	
}

int main(){
	

	char * result = ticket(23123434);

	printf("%s", result);

}
