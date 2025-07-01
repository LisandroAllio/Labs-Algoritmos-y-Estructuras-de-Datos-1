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
    y = y + y; 
    x = x + y;

    /*Resultado*/
    printf("El resultado es:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);
        return 0;

}
    /*
    Entrada: x→2, y→-2 || Salida: x→-2, y→-4
    Entrada: x→6, y→6 || Salida: x→18, y→-12
    Entrada: x→-3, y→9 || Salida: x→15, y→18
     */