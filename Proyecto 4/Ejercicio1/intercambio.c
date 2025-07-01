#include <stdio.h>
#include <assert.h>

int main (void) {
    /*Declaracion*/
    int x, y, z;
    int xInput, yInput;
    x, y, z = 1, 1, 1;
    printf("Ingrese el valor de x:\n");
    scanf("%d", &xInput);
    printf("Ingrese el valor de y:\n");
    scanf("%d", &yInput);
    x = xInput;
    y = yInput; 

    /*Precondiocion*/
    assert(x == xInput && y == yInput);

    z = x;
    x = y;
    y = z;

    /*Post-condicion*/
    assert(x == yInput && y == xInput);

    /*Resultado*/
    printf("El resultado:\n");
    printf("x= %d", x);
    printf("y= %d", y);
    
    return 0;
}