#include <stdio.h>
#include <stdbool.h>
#define N 4

/*Funciones*/
bool existe_positivo(int a[], int tam) {
    int i; 
    bool valor;
    i = 0;
    valor = false;
    while (i < tam && valor == false) {
        if (a[i] > 0) {
            valor = true;
        }
    /*
    while (i < tam) {
        valor = valor || (a[i] > 0);
    */
        i = i + 1;
    }
    return valor;
}

bool todos_positivos(int a[], int tam) {
    int i; 
    bool valor;
    i = 0;
    valor = true;
    while (i < tam && valor == true){
        if (a[i] < 0) {
            valor = false;
        }
    /*while (i < tam) {
        valor = valor && (a[i] > 0);
    */
        i = i + 1;
    }
    return valor;
}

int main (void) {
    /*Declaracion*/
    int a[N], i, op;
    bool valor;
    i = 0;
    op = 0;

    while (i <  N) {
        printf("Ingrese el valor %d del arreglo:", i);
        scanf ("%d", &a[i]); 
        i = i + 1;
    }
    
    /*Proceso*/
    printf("Seleccione una opcion: (1)Existencia de positivo, (2)Todos positivos: ");
    scanf("%d", &op);
    if (op == 1) { 
        valor = existe_positivo(a, N);
    }
    else {
        valor = todos_positivos(a, N);
    }
    /*Resultado*/
    if (valor== true) {
        printf("verdadero");
        }
    else {
        printf("falso");
    }
    
    return 0;
}