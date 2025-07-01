#include <stdio.h>
#include <assert.h>

int main (void) {
    /*Declaracion*/
    int x, xInput, abs;
    x = 0;
    printf("Ingrese un entero:\n");
    scanf("%d", &xInput);
    x = xInput;
    
    /*Precondiocion*/
    assert(x == xInput);

    if (x >= 0){
        abs = x;
    }
    else {
        abs = -x;
    }
    /*Post-condicion*/
    assert(abs == xInput || abs == -xInput );

    /*Resultado*/
    printf("El valor absoluto es: %d", abs);
    
    return 0;
}