#include <stdio.h> 
int main(void)            
 {  
    /*Declaracion*/
	int x = 1, y = 1, z = 1; /*Inicializamos las variables*/
    printf("Ingrese un valor para x: \n");
    scanf("%d", &x);

    /*Proceso*/
    x = 5;

    /*Resultado*/
    printf("El resultado es: %d\n", x);
        return 0;

}
    /*
    Entrada: x→8  ||  Salida: x→5 
    Entrada: x→10 ||  Salida: x→5 
    Entrada: x→3  ||  Salida: x→5 
    */