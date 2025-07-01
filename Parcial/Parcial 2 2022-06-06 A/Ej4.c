#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct persona_t
{
    int dni;
    float altura;
};

struct stats_t
{
    float altura_media;
    float altura_minima;
    float altura_maxima;
};

struct stats_t calcular_estadisticas(struct persona_t a[], int tam) {
    struct stats_t res = {0, a[0].altura, a[0].altura};
    int suma = 0, i = 0;

    while (i < tam) {
        if (a[i].altura > res.altura_maxima) {
            res.altura_maxima = a[i].altura;
        }
        if (a[i].altura < res.altura_minima) {
            res.altura_minima = a[i].altura;
        }

        suma = suma + a[i].altura;
        i = i + 1;
    }
    res.altura_media = suma / tam;

    return res;
}


void pedirArreglo(struct persona_t a[], int tam) {
    int i = 0;
    while (i < tam) {
        printf("\nIngrese el dni de la persona %d: ", i);
        scanf ("%d", &a[i].dni); 

        printf("Ingrese la altura de dicha persona: ");
        scanf ("%f", &a[i].altura); 
        i = i + 1;
    }
}

#define N 4
int main (void) {
    /*Inicializacion de variables*/
    struct persona_t a[N];
    struct stats_t p0;
    int i = 0;
    
    pedirArreglo(a, N);
    p0 = calcular_estadisticas(a,N);

    /*Resultados*/
    printf("Altura maxima: %f \nAltura minima: %f \nAltura media: %f", p0.altura_maxima, p0.altura_minima, p0.altura_media);


    return 0;
}