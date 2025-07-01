#include <stdio.h>
#include <assert.h>

int main (void) {
    /*Declaracion*/
    int x, y, z;
    int xInput, yInput;
    x, y, z = 1, 1, 1;
    printf("Ingrese valor para x:\n");
    scanf("%d", &xInput); 
    printf("Ingrese valor para y:\n");
    scanf("%d", &yInput); 
    x = xInput;
    y = yInput;

    /*Precondicion*/
    assert(x == xInput && y == yInput);

    /*Proceso*/
    z = x;
    x = x + 1;
    y = z + y;

    /*Post-condicion*/
    assert(x == xInput + 1 && y == xInput + yInput);

    /*Resultado*/
    printf("Resultado:\n");
    printf("x = %d\n",x);
    printf("y = %d",y);
    
    return 0;
}