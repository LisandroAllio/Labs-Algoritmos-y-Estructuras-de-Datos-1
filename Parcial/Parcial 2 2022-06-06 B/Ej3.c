#include <stdio.h>
#define N 5

struct sum_t {
    int inferior;
    int superior;
};
/*Funciones*/
struct sum_t suma_acotada(int cota, int a[], int tam){
    struct sum_t res = {0,0};
    int sum_inf = 0, sum_sup = 0;

    int i = 0;
    while (i < tam) {
        if (a[i] < cota) {
            sum_inf = sum_inf + a[i];
        }
        else {
            sum_sup = sum_sup + a[i];
        }
        i = i + 1;
    }
    res.inferior = sum_inf;
    res.superior = sum_sup;
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

/*Main*/
int main (void) {
    /*Inicializacion de variables*/
    struct sum_t p0;
    int a[N]; 
    int cota = 0;

    /*Declaracion de arreglo*/
    pedirArreglo(a, N);
    printf("Ingrese una cota: ");
    scanf("%d", &cota);

    /*Proceso*/
    p0 = suma_acotada(cota, a, N);

    /*Resultados*/
    printf("Suma de elementos inferiores a la cota: %d \nSuma de elementos superiores a la cota: %d", p0.inferior, p0.superior);
    return 0;
}