#include <stdio.h>
#include <assert.h>
#define N 4

void intercambiar(int a[], int tam, int i, int j){
    int z; 
    z = 0;
    z = a[i];
    a[i] = a[j];
    a[j] = z;
}

void pedirArreglo(int a[], int n_max) {
    int i = 0;
    while (i < n_max) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }
}

void imprimeArreglo(int a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf("Pos %d: %d \n", i , a[i]);
        i = i + 1;
    }
}

int main(void){
    /*Declaracion*/
    int a[N], i = 0, j = 0;

    pedirArreglo(a, N);

    printf("Ingrese posicion i:\n");
    scanf("%d", &i);
    printf("Ingrese posicion j:\n");
    scanf("%d", &j);
    assert(i > 0 && i < N && j > 0 && j < N);
   
    intercambiar(a, N, i, j);

    /*Resultados:*/
    imprimeArreglo(a, N);

    return 0;
}
