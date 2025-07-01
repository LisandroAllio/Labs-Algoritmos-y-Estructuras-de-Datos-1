#include <stdio.h>

/*Funciones*/
int pedirEntero(void) {
    int x;
    printf("Ingrese un valor para x\n"); 
    scanf("%d", &x); 
    return x;
}

void imprimeEntero(int x) {
    printf("El resultado es: %d", x);
}

/*Principal*/
int main (void) {
    imprimeEntero(pedirEntero());

    return 0;
}