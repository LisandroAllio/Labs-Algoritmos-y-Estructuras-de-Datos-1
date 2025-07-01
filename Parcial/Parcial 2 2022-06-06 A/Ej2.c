#include <stdio.h>
#include <assert.h>


int suma_mayores (int a[], int tam, int k) {
    int i = 0, suma = 0;
    while (i < tam) {
        if (a[i] > a[k]) {
            suma = suma + a[i];
        }
        i = i + 1;
    }
    return suma;
}

#define N 5
int main (void) {
    /*Inicializacion*/
    int a[N], k = 0, suma = 0;

    //Ingreso del arreglo
    int i = 0;
    while (i < N) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }

    printf("Ingrese la posicion del arreglo k: ");
    scanf("%d", &k);

    /*Llamada de la funcion*/
    suma = suma_mayores(a, N, k);

    /*Resultado*/
    printf("La suma de los elemento mayores a %d es: %d", a[k], suma);

    return 0;
}

