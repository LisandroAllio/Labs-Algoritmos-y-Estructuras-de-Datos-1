#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define N 4

/*Funciones*/
int minimo_pares(int a[], int tam) {
    int i, min; 
    i = 0;
    min = INT_MAX;
    while (i < tam) {
        if ((a[i]%2 == 0) && (a[i] < min)) {
            min = a[i];
            }
        i = i+1;
    }
    return min;
}

int minimo_impares(int a[], int tam) {
    int i, min; 
    i = 0;
    min = INT_MAX;
    while (i < tam) {
        if ((a[i]%2 != 0) && (a[i] < min)) {
            min = a[i];
            }
        i = i+1;
    }
    return min;
}

/*Funciones auxiliares*/
int minimo (int a, int b) {
    int min = 0;
    if (a <= b) {
        min = a;
    }
    else {
        min = b;
    }

    return min;
}

void pedirArreglo(int a[], int n_max) {
    int i = 0;
    while (i < n_max) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }
}

int main (void){
    /*Declaracion*/
    int a[N], min = 0, minp = 0, minI = 0;
    pedirArreglo(a, N);
    minp = minimo_pares(a,N);
    minI = minimo_impares(a, N);

    min = minimo(minp, minI);
    printf("Minimo elemento del arreglo: %d", min);

    return 0;
}