#include <stdio.h>
#include <assert.h>

int main (void) {
    /*Declaracion*/
    int x, y, min;
    int xInput, yInput;
    x, y = 1, 1;
    printf("Ingrese un entero:\n");
    scanf("%d", &xInput); 
    printf("Ingrese otro entero:\n");
    scanf("%d", &yInput);  
    x = xInput;
    y = yInput;
    
    /*Precondiocion*/
    assert( x == xInput && y == yInput);
    /*Proceso*/
    if (x >= y){
        min = y;
    }
    else {
        min = x;
    }
    /*Post-condicion*/
    assert(min == yInput || min == xInput );

    /*Resultado*/
    printf("El minimo es: %d", min);
    
    return 0;
}