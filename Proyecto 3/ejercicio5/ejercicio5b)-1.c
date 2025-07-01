#include <stdio.h>
int main (void)
{
    /*Declaracion*/
	int x, y, i;
    printf("Ingrese un valor para x: \n");
    scanf("%d", &x);
    printf("Ingrese un valor para y: \n");
    scanf("%d", &y);
    printf("Ingrese un valor para i: \n");
    scanf("%d", &i);
    
    /*Proceso*/
    i = 0;

    while (x >= y) {
        x = x - y;
        i = i + 1;
    }
     
    /*Resultado*/
    printf("El resultado es:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);
    printf("i= %d\n", i);
        return 0;

    /*El programa cuenta la cantidad de veces que hace falta restar a X Y para que Y 
    sea mas grande*/    
}
/*
σ01: (x→ 10,y→ 3,i→ 1) , σ11: (x→ 7,y→ 3,i→ 2) , 
σ21: (x→ 4,y→ 3,i→ 3) , σ31: (x→ 1,y→ 3,i→ 4) 
*/