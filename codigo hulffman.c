#include <stdio.h>
#define MAX = 99999
int main()
{

    char letras[MAX];
    int i,j=0;
    printf("digite la oracion\n");
    for(i=0;i<MAX;i++)
    {
        scanf("%c",&letras[i]);
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%c\n",letras[i]);
    }
}

