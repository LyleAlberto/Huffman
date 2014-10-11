
#include <stdio.h>
#include <stdlib.h>
#define max 16
int imprime();
int cargar();
int frecu(); 

int frecuencias[max];
char letras[max];

int main()
{
    int i,j=0,con=0;
    printf("programa para codificar oracion\n\n-------------------------------------\n\n");
    
    printf("digite la oracion\n");
    cargar();
    printf("las frecuencias por cada letra son\n");
    frecu();
    imprime();
	printf("la oracion es:\n");
     for(i=0;i<max;i++)
    {
        printf("%c ",letras[i]);
    }
    
}
int imprime()
{ int i;
for(i=0;i<max;i++)
    {
        printf("%d ",frecuencias[i]);
    }
}

int cargar()
{int i;
	for(i=0;i<max;i++)
    {
        scanf("%c",&letras[i]);
    }
} 
int frecu()
{int i,j,con=0;
	for(i=0;i<max;i++)
    {
    	for(j=0;j<max;j++)
    	{
    		if(letras[i]==letras[j]){con++;frecuencias[i]=con;}
    	}
    	con=0;
    }
}
