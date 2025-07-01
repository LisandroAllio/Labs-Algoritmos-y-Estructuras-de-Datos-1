#include <stdio.h>
#include <assert.h>
#include <limits.h>
#define N 5

struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(float a[], int tam) {
    /*Declaro la variable del tipo Struct */
    struct datos_t p0 = {a[0], a[0], a[0]};

    assert(tam > 0);

    /*Inicializo los campos de la estructura*/
    /*
    p0.maximo = a[0];
    p0.minimo = a[0];
    p0.promedio = a[0];
    */
    int i = 0;
    float suma = 0;
    
    /*Ciclo*/
    while (i < tam) {
        if (a[i] > p0.maximo) {
            p0.maximo = a[i];
        }
        else {
            p0.minimo = a[i];
        }
        suma = (suma + a[i]);

        i = i+1;
    }
    p0.promedio = suma / tam;
    return p0;
}

void pedirArreglo(float a[], int n_max) {
    int i = 0;
    while (i < n_max) {
        printf("Ingrese el valor %d del arreglo: ", i);
        scanf ("%f", &a[i]); 
        i = i + 1;
    }
}

void imprimeArreglo(float a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf("Posicion %d: %f\n", i , a[i]);
        i = i + 1;
    }
}

int main (void) {
    float a[N];
    struct datos_t s;

    pedirArreglo(a, N);
    imprimeArreglo (a, N);
    s = stats(a, N);

    printf("Maximo = %f\nMinimo= %f\nPromedio= %f\n", s.maximo, s.minimo, s.promedio); 

    return 0;
}