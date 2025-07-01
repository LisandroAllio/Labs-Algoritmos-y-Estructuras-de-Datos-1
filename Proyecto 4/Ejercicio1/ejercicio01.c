#include <stdio.h>
#include <assert.h>

/*Funciones*/
void holaHasta(int n) {
    int i;
    i = 0;
    while (i < n) {
        printf("Hola\n");
        i = i + 1;
    }
}

int pedirEntero(void) {
    int x;
    x = 0;
    printf("Ingrese un numero positivo:\n");
    scanf("%d", &x); 
    assert(x > 0);
    return x;
}

/*main*/
int main (void) {
    /*Declaracion*/
    int n = 1;
    n = pedirEntero();

    /*Proceso*/
    holaHasta(n);

    return 0;
}