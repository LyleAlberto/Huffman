/**
@file principal.c
@author Karen Johana Melo, Katherine Alejandra Muñoz, Lyle Alberto Romero
@Date 04 septiembre 2014
@brief Programa inicial, planteamiento del algoritmo de huffman.
@param argc, chat* argv[]
@param letras, Vector letras para guardar palabra
@param frecuencias, Vector frecuencias para guardar el conteo de frecuencias
@param max, es el número de pocisiones
@var con, variable contador
*/

//------------------------------
#include <stdio.h>
#include <stdlib.h>
#define max 16
//------------------------------
int imprime();
int cargar();
int frecu();

int frecuencias[max];
char letras[max];

int main()
{
	/*! \var char letras[10]
	 * \brier variable tipo vector de caracter para guardar la oracion.
	 */
    int i,j=0,con=0;
    printf("programa para codificar oracion\n\n-------------------------------------\n\n");

    printf("digite la oracion\n");
    /**desarrollo 1 (cargar en el vector letras la oracion)*/
    cargar();
    printf("las frecuencias por cada letra son\n");
    /** desarrollo 2 (cargar en el vector frecuecnias, el conteo de frecuencias de cada caracter)*/
    frecu();
    /** desarrollo 3 (imprimir el vector frecuencias numero de fre. de cada pocision de la cadena de caracter)*/
    imprime();
    /** desarrollo 4 (imprimir el vector letras la cadena de caracteres)*/
	printf("la oracion es:\n");
     for(i=0;i<max;i++)
    {
        printf("%c ",letras[i]);
    }

}
//----------------------------------
int imprime()
{ int i;
for(i=0;i<max;i++)
    {
        printf("%d ",frecuencias[i]);
    }
}
//----------------------------------

int cargar()
{int i;
	for(i=0;i<max;i++)
    {
        scanf("%c",&letras[i]);
    }
}
//-----------------------------
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
