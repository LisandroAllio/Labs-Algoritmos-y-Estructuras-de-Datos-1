#include <stdio.h>
/*Funciones*/
int pedirEntero(void) {
    int x;
    printf("Ingrese un valor\n"); 
    scanf("%d", &x); 
    return x;
}

void imprimeEntero(int x) {
    printf("El resultado es: %d\n", x);
}

/*Principal*/
int main (void) {

    /*Declaracion*/
    int x, y, z, m;
    x = pedirEntero();
    y = pedirEntero();
    z = pedirEntero();
    m = pedirEntero();

    /*Proceso*/
    if (x < y) {
        m = x;
    }
    else  {
        m = y;
    }

    if (m < z) {}
    else {
        m = z;
    }

    /*Resultado*/
    imprimeEntero(x);
    imprimeEntero(y);
    imprimeEntero(z);
    imprimeEntero(m);

        return 0;
}
/*Dichas funciones se pueden usar en todos los ejercicios pasados, ya que se basan en pedir valores e imprimirlos. 
La principal ventaja que le encunetro es el re suo de codigo,lo cual en programas muy grandes nos permitira ahorrar 
mcuhas lineas de codigo*/