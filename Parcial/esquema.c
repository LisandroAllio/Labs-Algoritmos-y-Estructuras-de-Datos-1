#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define N 5

/*Main*/
int main (void) {
    /*Inicializacion de variables*/

    /*Proceso*/

    /*Resultados*/

    return 0;
}
//-----------------------------------------------------------------

/*Recorrer arreglo*/
void funcion(int a[], int tam) {
    int i = 0;
    while (i < tam) {
        //S
        i = i + 1;
    }
}

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

/*Inicializacion de arreglo*/
int Ini_arreglo(int a[], int tam){
    int i=0;
    while (i<tam){
        a[i]=0;
        i=i+1;
    }
}

//-----------------------------------------------------------------

/*MINIMO*/
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
//-----------------------------------------------------------------

/*Verificacion de positivos en arreglo*/
bool todos_positivos(int a[], int tam) {
    int i = 0; 
    bool valor  = true;
    while (i < tam) {
        valor = valor && (a[i] > 0);
        i = i + 1;
    }
    return valor;
}

bool existe_positivo(int a[], int tam) {
    int i = 0; 
    bool valor = false;
    while (i < tam) {
        valor = valor || (a[i] > 0);
        i = i + 1;
    }
    return valor;

}