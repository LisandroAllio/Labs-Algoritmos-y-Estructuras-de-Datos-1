#include <stdio.h>
int main (void)
{
    /*Declaracion*/
	int x, i, res;
    printf("Ingrese un valor para x: \n");
    scanf("%d", &x);
    printf("Ingrese un valor para i: \n");
    scanf("%d", &i);
    printf("Ingrese un valor para res: \n");
    scanf("%d", &res);
    
    /*Proceso*/
    i = 2;
    res = 1;
    
    while (i<x && res) {
        res = res && ((x%i) != 0);
        i = i+1;
    }

    /*Resultado*/
    printf("El resultado es:\n");
    printf("x= %d\n", x);
    printf("i= %d\n", i);
    printf("res= %d\n", res);
        return 0;

    /*Te Dice si x es primo o no, ya que busca los divirosres menores a x. Si encuentra alguno devuelte False, 
    si el unico divisor es x mismo te devuelve True*/    
}

/*
 σ01: (x→ 5,i→ 3,res→ 1) , σ11: (x→ 5,i→ 4,res→ 1)  
σ21: (x→ 5,i→ 5,res→ 1)
*/
