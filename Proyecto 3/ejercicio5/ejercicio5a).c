#include <stdio.h>
int main (void)
{
    /*Declaracion*/
	int i;
    printf("Ingrese un valor para i: \n");
    scanf("%d", &i);

    /*Proceso*/
    while (i != 0) {
        i = i - 1;
    }
    
    /*Resultado*/
    printf("El resultado es:\n");
    printf("i= %d\n", i);
        return 0;
}