#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**

	* @file lab52.c
	* @brife Файл с другим заданием с лабораторной работы №5
	* "Определить есть ли заданное число простым?"
	* @author Rostyslav Polizhay
	* @date 26-jan-2021
	* @version 0.1

*/

/**

	* @brief Функция проверки числа на простоту
	* @param Целое число
	* @return Значение переменной  "result"

*/

//Ф-ция проверки на простоту
bool sPrime( int a ){

	int delimetr = 2;
	bool result;
	while (a % delimetr != 0){
		
		delimetr += 1;
	}
	if(delimetr == a){
		result = true;
	}
	else {
		result = false;
	}
	return result;
}

int main(){
	bool prime = sPrime(rand()%100);

	if(prime == true){
		printf("%s","Prime")
	}
	else{
		printf("%s","Not prime")
	}
}
