#include <stdio.h>

/**

 * @file lab64.c
 * @brief Файл с четвертым заданием лабораторной работы №6
 * "В заданом тексте найти кол-во слов при условии,что между словами может быть любое кол-во пробелов"
 * @author Polizhay Rostislav.
 * @date 28-jan-2021
 * @version 0.1

*/

/**
 
 * @brief Ф-ция подсчета кол-ва слов
 * @param Строка
 * @return Логичный ответ выводим в консоль

*/

int howManyWords(char text[]){
	
	int words = 0;                               

	for(int i = 0; text[i] != '\0'; i++){

		if(text[i] != ' ' && text[i+1] <= ' '){

			words++;

		}

	}   

	return words;
	
}

int main(){
	int result = howManyWords("Hello World     saspaksj");

	printf("%d", result);
	
	return 0;
}


