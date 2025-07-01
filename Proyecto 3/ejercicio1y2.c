#include <stdio.h> 
int main(void)            
 {  
    /*Declaracion*/
	int x, y, z, b, w;
    printf("Ingrese un valor para x: \n");
    scanf("%d", &x);
    printf("Ingrese un valor para y: \n");
    scanf("%d", &y);
    printf("Ingrese un valor para z: \n");
    scanf("%d", &z);
    printf("Ingrese un valor (bool) para b: \n");
    scanf("%d", &b);
    printf("Ingrese un valor (bool) para w: \n");
    scanf("%d", &w);
    
    /*Resultados*/
    printf("Los resultado de la tabla son los siguientes: \n");
    printf("El resultado de (x + y + 1): %d\n", x + y + 1);
    printf("El resultado de (z * z + y * 45 - 15 * x): %d\n", z * z + y * 45 - 15 * x);
    printf("El resultado de (y - 2 == (x * 3 + 1) mod 5): %d\n", y - 2 == (x * 3 + 1) % 5);
    printf("El resultado de (y / 2 * x): %d\n", y / (2 * x) );
    printf("El resultado de (y < x * z): %d\n", y < x * z);

    /*
    Entrada = x→7, y→3, z→5
    Resultado de (x + y + 1) = 11
    Resultado de (z * z + y * 45 - 15 * x) = 55
    Resultado de (y - 2 == (x * 3 + 1) % 5) = 0 (false)
    Resultado de (y / 2 * x) = 0
    Resultado de (y < x * z) = 1 (true)

    Entrada = x→1, y→10, z→8
    Resultado de (x + y + 1) = 12
    Resultado de (z * z + y * 45 - 15 * x) = 499
    Resultado de (y - 2 == (x * 3 + 1) % 5) = 0 (false)
    Resultado de (y / 2 * x) = 5
    Resultado de (y < x * z) = 0 (false)
    */

   /*El tipo de la ultima expresion es de tipo Int, pero C lo interpreta como booleanos. 
   Siendo 0 = false y 1 = true*/

    /*Ejercicio 2*/
    printf("El resultado de (x mod 4 == 0): %d\n", x % 4 == 0);
    printf("El resultado de (x + y == 0 && y - x == (-1) * z): %d\n", x + y == 0 && y - x == (-1) * z);
    printf("El resultado de (not b && w): %d\n", !b && w); 
        return 0;

    /*
    Valores que resuelven el problema = x→4, y→-4, z→8, b y w tiene que tener el mismo valor (ambos 0 o ambos 1)
    */
}