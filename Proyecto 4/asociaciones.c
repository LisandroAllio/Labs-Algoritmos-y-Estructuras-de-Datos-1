#include <stdio.h>
#include <stdbool.h>
#define N 5

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(struct asoc a[], int tam, clave_t c) {
    int i = 0;
    bool res = false;
    while (i < tam) {
        res = res || (a[i]. clave == c);
        i = i + 1;
        } 
    return res;
    }


int main (void){
    struct asoc a[N];

    int i = 0;
    while (i < N) {
        printf("Ingrese la clave n %d:", i);
        scanf("%c", &a[i].clave);

        printf("Ingrese el valor n %d:", i);
        scanf("%d", &a[i].valor);
        i = i + 1;
    }

    char c = '_';
    printf("Ingrese una clave a buscar: ");
    scanf("%c", &c);
    
    bool res;
    res = asoc_existe(a, N , c);
    
    if (res) {
        printf("Si existe la clave\n");
    }
    else {
        printf("No existe la clave\n");
    }
    
    return 0;
}