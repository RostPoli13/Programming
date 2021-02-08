# Звіт до завдання 6.1

Центрувати рядок на площині із заданим заповнювачем

###1. Функція makeCenter
		void makeCenter(char string[]){
		
			int massLength = 0;
			
			
			while (string[massLength] != '\0')
			{
				massLength++;
			}
			
			char mass[massLength];

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
			

			for (int j = 0; j < massLength; j++){
			
				printf("%c", mass[j]);
			
			}

		}

###2. Функція main
		int main(){

			makeCenter("Ivanov         ");

			return 0;
			
		}
###3. Блок-схема

![](block-schemes/lab06/firstEx.png)
