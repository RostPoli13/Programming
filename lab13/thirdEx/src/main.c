#include <stdio.h>

int main(void)
{
	const int masslength = 25; //Длинна изначального массива
	const int alpalength = 26; //Длинна алфавита

	char mass[masslength] = {"fdsfddasdasdf"}; 

	char alphabet[alpalength] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	int quatity[alpalength] = {};
	int count = 0;

	//Количество каждого элемента
	for (int i = 0; i < alpalength; i++) 
	{
		count = 0;
	    
		for ( int j = 0; j < masslength; j++)
	    {
	    	if (alphabet[i] == mass[j]) {
	        	count++;
	      	}
    
	    }

	    quatity[i] = count; 
	  }

	printf("\n");
	int sum = 0;
	for (int i = 0; i < alpalength; i++)
	{
		sum = sum + quatity[i];
	}


	float frequency[alpalength];

	//выводим результат
	for (int i = 0; i < alpalength; i++) 
	{

		frequency[i] = (float)quatity[i] / sum;

		printf("%f ", frequency[i]); 
		printf("%c\n", alphabet[i]);
	}
	return 0;
}














