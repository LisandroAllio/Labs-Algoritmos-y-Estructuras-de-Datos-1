#include <stdio.h>
#include <stdbool.h>

struct paridad_t
{
    int n_pares;
    int n_impares;
};

struct paridad_t contar_paridad (int a[], int tam) {
    struct paridad_t res = {0,0};
    int i = 0;
    while (i < tam) {
        if (a[i]%2 == 0) {
            res.n_pares = res.n_pares + 1;
        }
        else {
            res.n_impares = res.n_impares + 1;
        }
        i = i + 1;
    }
    return res;
}

void pedirArreglo(int a[], int tam) {
    int i = 0;
    while (i < tam) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }
}

#define N 4
int main (void) {
    /*Inicializacion de variables*/
    int a[N];
    struct paridad_t p0;

    pedirArreglo (a, N);
    p0 = contar_paridad(a, N);

    /*Resultados*/
    printf("Cantidad de elemento pares: %d\nCantidad de elemento impares: %d", p0.n_pares, p0.n_impares);

    return 0;
}