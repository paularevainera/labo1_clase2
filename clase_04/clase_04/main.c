#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    int numero;
    int devuelve;
    funciones_prueba();
    devuelve=funciones_getnumber(&numero,100,0,"Ingrese un numero:","No,error!","Reintentos", 5);
    if (devuelve ==1)
    {
        printf("\nDevuelve 1, esta bien.");
    }
    else
    {
        printf("\nError");
    }
    return 0;
}
