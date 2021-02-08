#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[] = "Hello, i'm Rostyslav. I am 18 years old. I lived in Svatovo almost than 18 years."; //Объявление начального массива
    int N = sizeof(string); //Длина начального массива
    int x;
    int finalArray[N];
    int count = 0;

    for(int i = 0;i < N;i++)
    {
        if(string[i] != ' '){
            if((string[i] >= '1') && (string[i] <= '9') && (string[i] != ' '))
            {
                x = ((int)string[i] - 48);
                finalArray[count] = x;
                count++;

                if( (string[i + 1] < '1') || (string[i + 1] > '9') )
                {
                    finalArray[count] = 91292149;
                    count++;
                }
            }
        }
    }
    
    for (int i = 0; i < count; i++)
    {
    	if (finalArray[i] == 91292149)
    	{
	        printf("\n");
    	}
    	else
    	{
    	    printf("%d", finalArray[i]);
    	}
    }

    return 0;
}
