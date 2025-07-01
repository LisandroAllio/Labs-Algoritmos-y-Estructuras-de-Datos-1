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
    if (x>=y) {
        x = 0;
    }
    else  {
        x = 2;
    }
    
    /*Resultado*/
    printf("El resultado es:\n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);
        return 0;
}