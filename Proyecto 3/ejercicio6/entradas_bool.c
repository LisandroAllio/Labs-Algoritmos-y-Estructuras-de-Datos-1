#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool pedirBooleano (void) {
    bool temp;
    printf("Ingrese un bool: 0 para false | 1 para true\n");
    scanf("%d", &temp);
    return temp;
}

void imprimeBooleano (bool x) {
    if (x == true) {
        printf("verdadero\n");
    }
    else {
        printf("falso\n");
    }
}

int main (void) {
    imprimeBooleano (pedirBooleano());
        return 0;
}