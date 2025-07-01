#include <stdio.h>
#include <assert.h>

/*Main*/
int main (void) {
    /*Inicializacion de variables*/
    int x=0, y=0, z =0, xInput=0, yInput=0;

    /*Declaracion de variables*/
    printf("Ingrese el valor de x: ");
    scanf("%d", &xInput);

    printf("Ingrese el valor de y: ");
    scanf("%d", &yInput);

    x = xInput;
    y = yInput; 
    z = x;

     //Precondicion
    assert(x == xInput && y == yInput && (xInput * yInput) != 0);
    x = y * x;
    y = z * y;

    //Postcondicion 
    assert(x == (xInput*yInput) && x == y);

    /*Resultados*/
    printf("X: %d \nY: %d", x, y);
    return 0;
}