# Звіт до завдання 6.2

Заповнити масив із заданої кількості елементів простими числами, що не повторюються. Розмір вихідного масиву задати наперед відомим значенням, що може будуть більшим аніж результуюча кількість отриманих елементів

###1. Функція primeMass
		void primeMass(int arrLength){
    
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

		    for (int i = 0; i < arrLength; i++)
		    {
			printf("%d ", arr[i]);
		    }
		    
		}

###2. Функція main
		int main(){

		    
		    primeMass(6);

		    return 0;
			
		}
###3. Блок-схема

![](block-schemes/lab06/secondEx.png)
