#include <stdio.h>

void funciones_prueba(void)
{
    printf("Hola mundo desde la funcion.c\n");

}


int funciones_getnumber(int* pNumero, int max,int min, char* msg, char* msgError, char* msgReintento, int reintentos)
{
    int contador =0;
    int valida;
    int intentos;


    while (contador<reintentos)
    {
        printf("\n%s",msg);
        scanf("%d", pNumero);
        if ((*pNumero)> 0 && (*pNumero)< 100)
        {
            contador = reintentos;
            valida = 1;
        }
        else
        {
            contador ++;
            intentos= reintentos - contador;
            valida = 0;
            printf("%s\n", msgError);
            printf("%s: %d",msgReintento, intentos);

        }

    }
    return valida;



}
