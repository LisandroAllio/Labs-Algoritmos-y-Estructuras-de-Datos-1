#include <stdio.h>
#include <assert.h>

int main (void) {
    /*Declaracion*/
    int x, y, z, w;
    int xInput, yInput, zInput;
    x, y, z, w = 1, 1, 1, 1;
    printf("Ingrese valor para x:\n");
    scanf("%d", &xInput); 
    printf("Ingrese valor para y:\n");
    scanf("%d", &yInput); 
    printf("Ingrese valor para z:\n");
    scanf("%d", &zInput); 
    x = xInput;
    y = yInput;
    z = zInput;

    /*Precondicion*/
    assert(x == xInput && y == yInput && z == zInput );
    
    /*Proceso*/
    w = x;
    x = y;
    y = y + w + z;
    z = x + w;

    /*Post-condicion*/
    assert((x == yInput) && (y == yInput + xInput + zInput) &&  (z == yInput + xInput));

    /*Resultado*/
    printf("Resultado:\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("Z = %d\n",z);

    
    return 0;
}