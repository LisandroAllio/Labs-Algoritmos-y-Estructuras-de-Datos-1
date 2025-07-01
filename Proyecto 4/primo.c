#include <stdbool.h>
#include <stdio.h>

bool es_primo(int n) {
    bool res = true;

    int i = 2;
    while (i < n - 1) {
        res = res && n % i != 0;

        i = i + 1;
    }

    return res;
}

int nesimo_primo(int N) {

    int count = 0;
    int n = 2;
    int p = 2;

    while (count <= N) {
        if (es_primo(n)) {
            p = n;
            count = count + 1;
        }

        n = n+1;
    }

    return p;
}

int main (void) {
    int n = -1;
    int p = 0;
    
    while (n <= 0)
    {
        printf("Ingrese un valor positivo: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("ERROR INGRESE UN NUMERO MAYOR A CERO\n");
            }
    }
    p = nesimo_primo(n-1);
    printf("%d-esimo primo: %d", n, p);

    return 0;
}