#include <stdio.h> 
int main(void)            
 {
    /*Declaracion*/
	int x, y, z, m;
    printf("Ingrese un valor: \n");
    scanf("%d", &x);
    printf("Ingrese un valor para : \n");
    scanf("%d", &y);
    printf("Ingrese un valor para z: \n");
    scanf("%d", &z);
    printf("Ingrese un valor para m: \n");
    scanf("%d", &m);

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
    printf("El resultado es:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);
    printf("z= %d\n", z);
    printf("m= %d\n", m);
        return 0;
}

/*Te devuelve el mínimo (m) de tres entradas (x,y,z) que le des al programa*/