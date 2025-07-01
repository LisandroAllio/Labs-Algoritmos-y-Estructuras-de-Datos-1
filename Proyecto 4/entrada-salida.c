#include <stdio.h>
#include <assert.h>

/*Funciones*/
void pedirArreglo(int a[], int tam) {
    int i = 0;
    while (i < tam) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }
}

void imprimeArreglo(int a[], int tam) {
    int i = 0;
    while (i < tam) {
        printf("Pos %d: %d \n", i , a[i]);
        i = i + 1;
    }
}

/*Main*/
int main (void) {
    /*Declaracion*/
    int n, a[n];
    n = 1;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    /*Proceso*/
    pedirArreglo(a, n);
    
    /*Resultado*/
    imprimeArreglo(a, n);
    
    return 0;
}