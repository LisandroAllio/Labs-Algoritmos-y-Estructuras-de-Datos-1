#include <stdio.h>
#include <assert.h>
#define N 4

struct comp_t {
int menores;
int iguales;
int mayores;
};

/*Funciones*/
struct comp_t cuantos(int a[], int tam, int elem){
    /*Declaro la variable del tipo Struct */
    struct comp_t p0 = {0,0,0};

    /*Inicializo los campos de la estructura*/
    /*
    p0.menores = 0;
    p0.iguales = 0;
    p0.mayores = 0;
    */
    int i = 0; 
    
    /*Ciclo*/
    while (i < tam) {
        if (a[i] == elem){
            p0.iguales =  p0.iguales + 1;
        }
        else {
            if (a[i] < elem){
            p0.menores =  p0.menores + 1;
            }
            else {
            p0.mayores = p0.mayores + 1;
            }
        }
        
        i = i+1;
    }
    return p0;
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
    int a[N], e;
    struct comp_t p0;
    e = 0;

    pedirArreglo(a, N);

    printf("Ingrese un entero: ");
    scanf("%d", &e);

    /*Proceso*/
    p0 = cuantos(a, N, e);

    printf("Cantidad de mayores: %d\n", p0.mayores);
    printf("Cantidad de menores: %d\n", p0.menores);
    printf("Cantidad de iguales: %d\n", p0.iguales);

    return 0;
}