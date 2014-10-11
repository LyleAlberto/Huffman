#include <stdio.h>

int main()
{

    char letras[9999];// vector de tipo aracter
    int i,j=0;//variables enteras contadores
    printf("digite la oracion\n");
    for(i=0;i<9999;i++)
    {
        scanf("%c",&letras[i]);
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%c\n",letras[i]);
    }
}

