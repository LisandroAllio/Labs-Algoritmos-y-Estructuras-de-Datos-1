#include <stdio.h>
#include <stdbool.h>
#define N 5

struct asoc_t
{
    int clave;
    int valor;
};

bool hay_asoc(int key, struct asoc_t a[], int tam){
    int i = 0;
    while (i < tam) {
        if (a[i]. clave = key) {
            return true;
        }
        i = i+1;
    }
    return false;
}

void pedirArreglo(struct asoc_t a[], int tam) {
    int i = 0;
    while (i < tam) {
        printf("Ingrese la clave %d del arreglo: ", i);
        scanf ("%d", &a[i].clave); 
        printf("Ingrese su respectivo valor: ", i);
        scanf ("%d", &a[i].valor); 
        i = i + 1;
    }
}


/*Main*/
int main (void) {
    /*Inicializacion de variables*/
    struct asoc_t a[N];
    int key = 0;
    bool res;

    /*Declaracion de variables*/
    pedirArreglo(a, N);
    printf("Ingrese la clave a buscar: ");
    scanf("%d", &key);
    

    /*Proceso*/
    res = hay_asoc(key, a, N); 

    /*Resultados*/
    if (res) {
        printf("Si existe la clave\n");
    }
    else {
        printf("No existe la clave\n");
    }
    return 0;
}