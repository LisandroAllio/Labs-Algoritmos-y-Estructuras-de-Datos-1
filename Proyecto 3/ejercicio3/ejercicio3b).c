#include <stdio.h> 
int main(void)            
 {
    /*Declaracion*/
	int x, y;
    printf("Ingrese un valor para x: \n");
    scanf("%d", &x);
    printf("Ingrese un valor para y: \n");
    scanf("%d", &y);

    /*Proceso*/
    x = x + y;
    y = y + y; 

    /*Resultado*/
    printf("El resultado es:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);
        return 0;
 }
    /*
    Entrada: x→5, y→-5 || Salida: x→0, y→-10
    Entrada: x→3, y→-2 || Salida: x→1, y→-4
    Entrada: x→0, y→6 || Salida: x→6, y→12
     */