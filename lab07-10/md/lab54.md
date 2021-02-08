# Звіт до завдання 5.4

Визначити, чи є задане число досконалим (якщо воно дорівнює сумі своїх дільників)

###1. Функція isPerfect
		char * isPerfect(int a){
		
			int del = 1;
			
			int number = 0;
			
			char * result;
	
			
 			while (del < a){
 	
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

###2. Функція main
		int main(){
	
			
			char * result = isPerfect(28);

			printf("%s", result);
	
			return 0;
	
		}
###3. Блок-схема

![](block-schemes/lab05/fourthEx.png)
