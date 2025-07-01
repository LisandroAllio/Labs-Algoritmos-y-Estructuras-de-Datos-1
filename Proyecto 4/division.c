#include <stdio.h>
#include <assert.h>

struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y){
    struct div_t p0;
    p0.cociente = x / y;
    p0.resto = x % y;
    return p0;
};

int main (void) {
    /*Declaracion*/
    struct div_t p0 = {0,0};
    int x, y;
    
    x, y = 1, 1;

    printf("Ingrese un valor para x:\n");
    scanf("%d", &x);

    printf("Ingrese un valor para y:\n");
    scanf("%d", &y);

    /*Proceso*/
    if (x > 0 && y > 0) {
        p0 = division(x, y);
        printf(" El cociente es= %d y el resto es= %d\n",p0.cociente, p0.resto);
    }
    else {
        printf("ERROR. USTED A INGRESADO UN VALOR NEGATIVO");
    }
    return 0;
}