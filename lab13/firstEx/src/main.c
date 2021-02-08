/**
 * @author Polizhay Rostyslav.
 * @date 31-jan-2021
 * @version 0.1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int toAlphabet (const void * a, const void * b)
{
    return strcmp(*(char**)a,*(char**)b);
}

int main()
{ 
    const int N = 28;
    char string[N] = "b g a c b t d k z b s k u e";
    
    char sep[10]=" ";
   
    char *istr;

    istr = strtok (string,sep);

    int k = 0;

    char * s[200];

    while (istr != NULL)
    {
        s[k] = istr;
        istr = strtok(NULL,sep); 
        k++;
    }

    printf("Изначальная строка: \n");
  
    for(int i =0; i<k; i++){

        printf("%s ", s[i]);

    }
    printf("\n");

    printf("\n");

    printf("Количество слов в строке: \n");

    printf("%d\n", k);

    printf("\n"); 
 
 
    qsort(s, k, sizeof(char**), toAlphabet);

    printf("Отсортированная строка: \n");
   
    for(int i =0; i<k; i++){

        printf("%s ", s[i]);

    }

    printf("\n");

}

