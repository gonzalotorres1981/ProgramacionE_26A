#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i;
    int numero[5];
    char arregloc[5];

    printf("===========================================================\n");
    printf("Comprobacion de espacio guardado para un arreglo de enteros\n");
    printf("===========================================================\n\n");


    for (i=0; i<5; i++)
    {
        printf("%d",&numero[i]);
        printf("\n");
    }

    printf("\n");
    printf("Direccion de memoria del identificador del arreglo de enteros\n");
    printf("%d",numero);
    printf("\n\n");

    printf("==============================================================\n");
    printf("Comprobacion de espacio guardado para un arreglo de caracteres\n");
    printf("==============================================================\n\n");

    for (i=0; i<5; i++)
    {
        printf("%d",&arregloc[i]);
        printf("\n");
    }
    printf("\n");
    printf("Direccion de memoria del identificador del arreglo de caracteres\n");
    printf("%d",arregloc);
    printf("\n");

    return 0;
}


