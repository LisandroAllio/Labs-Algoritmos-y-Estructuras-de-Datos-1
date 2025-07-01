#include <stdio.h>
#include <assert.h>
struct lapso_t
{
    int horas;
    int minutos;
    int segundos;
};

struct lapso_t calcular_lapso (int segs) {
    struct lapso_t res = {0,0,0};

    assert(segs >= 0);

    res.horas = segs / 3600;
    res.minutos = (segs % 3600)/60;
    res.segundos = (segs % 3600) % 60;
    return res;
}


int main (void) {
    /*Inicializacion de variables*/
    struct lapso_t p0;
    int segs = 0;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segs);

    if (segs < 0) {
        printf("ERROR. PARAMETRO NO VALIDO");
        return 0;
    }

    /*Proceso*/
    p0 = calcular_lapso(segs);

    /*Resultados*/
    printf("Horas: %d \nMinutos: %d \nSegundos: %d", p0.horas, p0.minutos, p0.segundos);

    return 0;
}