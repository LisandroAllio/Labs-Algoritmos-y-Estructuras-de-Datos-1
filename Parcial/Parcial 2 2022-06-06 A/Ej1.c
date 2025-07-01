#include <stdio.h>
#include <assert.h>
int main (void) {
    /*Inicializacion y declaracion de variables*/
    int r = 0, s = 0, p = 0, rInput = 0, sInput = 0;
    printf("Ingrese el valor de r: ");
    scanf("%d", &rInput);

    printf("Ingrese el valor de s: ");
    scanf("%d", &sInput);

    r = rInput;
    s = sInput;

    //Precondicion:
    assert(r == rInput && s == sInput &&  sInput > rInput);
    p = r;
    r = s - r;
    s = p + s;
    //Postcondicion:
    assert(r == (sInput - rInput) && s == (rInput + sInput));

    printf("Valor de r: %d\nValor de s: %d", r, s);

    return 0;
}