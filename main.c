#include <stdio.h>
#include <stdlib.h>

int pedirNumero (void);
ddd
int main()
{
    int pedirNumero(void);
}

int pedirNumero(void)
{
    int numero;
    int maximo;
    int contador=0;
    int minimo;

    do
    {
        printf("Ingrese numero:");
        scanf("%d",&numero);

        if(contador ==0)
        {
            maximo = numero;
        }
        else
        {
            if (numero < maximo)
            {
                maximo = numero;

            }

            if(numero<maximo)
            {
                minimo = numero;
            }
        }
        contador ++;
    }
    while(numero!=-1);
    return 0;

}
