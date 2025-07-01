#include <stdio.h>
#include <assert.h>

int suma_hasta(int N) {
    int suma;
    suma = (N * (N+1))/2;
    return suma;
}

int main (void) {
    /*Declaracion*/
    int n, suma;
    n = 1;
    suma = 1;
    printf("Ingrese un numero positivo:\n");
    scanf("%d", &n);

    /*Proceso*/
    if (n > 0) {
        suma = suma_hasta(n);
        printf("Suma de los %d primeros naturales: %d", n, suma);
    }
    else {
        printf("ERROR. USTED A INGRESADO UN VALOR NEGATIVO");
    }
    
    return 0;
}