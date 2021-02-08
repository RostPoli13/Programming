#include <stdio.h>

/**

 * @file lab61.c
 * @brief Файл с первым заданием с лабораторной работы №6
 * "Центрировать строку с созданным заполнителем"
 * @author Polizhay Rostyslav.
 * @date 27-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция центрирования слова и замены пробелов заполнителем
 * @param Строка
 * @return Логичный ответ 

*/

void makeCenter(char string[]){
	int massLength = 0;
	
	
	while (string[massLength] != '\0')
	{
		massLength++;
	}
	
	char mass[massLength]; //массив вывода

	for (int j = 0; j < massLength; j++){
	
		if (string[j] == ' '){
		
			break;
		
		}else{
		
			mass[j] = string[j];
		
		}
	
	}
		for (int j = 0; j<=massLength; j++){
	
		if(mass[j] != string[j]){
		
			mass[j] = '_';
					
		}
	
	}
	
	int foolerCounter = 0;
	
	for (int j = 0; j<=massLength; j++){
	
		if(mass[j] == '_'){
		
			foolerCounter++;
		
		}
	
	}
	
	
	for (int j = 0; j<foolerCounter/2; j++){
	
		mass[j] = '_';
	
	}
	
	for (int j = 0; j<=massLength; j++){
	
		mass[j+foolerCounter/2] = string[j];
	
	}
	
	if(massLength % 2 == 0){
	
		for (int j = 0; j<massLength; j++){
		
			if (mass[j] == ' ' || mass[j] == '\0'){
			
				mass[j] = '_';
			
			}
		
		}
		
	}else{
	
		for (int j = 0; j<=massLength; j++){
		
			if (mass[j] == ' ' || mass[j] == '\0'){
			
				mass[j] = '_';
			
			}
		
		}
	
	}
	
	//Результат

	for (int j = 0; j < massLength; j++){
	
		printf("%c", mass[j]);
	
	}

}

int main(){

	makeCenter("Ivanov         ");

	return 0;
	
}

