#include <stdio.h>
#define N 3

int sumatoria(int a[], int tam) {
    int i, suma;
    // {tam -> 3, a -> [x,y,z]}
    i = 0;
    suma = 0;
    while (i < tam) {
        suma = suma + a[i];
        i = i + 1;
    }
    // {tam -> 3, a -> [x,y,z], suma -> (x+y+z)}
    return suma;
}

void imprimeArreglo(int a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf("Pos %d: %d \n", i , a[i]);
        i = i + 1;
    }
}

void pedirArreglo(int a[], int n_max) {
    int i = 0;
    while (i < n_max) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }
}

int main (void) {
    /*Declaracion*/
    int a[N], i = 0 , suma = 0;

    pedirArreglo (a, N);
    suma = sumatoria(a, N);

    /*Resultado*/
    printf("Suma de los elementos del arreglo: %d", suma);
    
    return 0;
}