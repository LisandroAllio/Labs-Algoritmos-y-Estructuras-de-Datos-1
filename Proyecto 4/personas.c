#include <stdio.h>

typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

float peso_promedio(persona_t arr[], unsigned int longitud) {
    int i = 0, suma = 0;
    float prom = 0;
    while (i < longitud){
        suma = suma + arr[i].peso;
        i  = i+1;
    }
    prom = suma / longitud;
    return prom;
}

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud){
    persona_t res;
    int max = arr[0].edad;
    int i = 0;
    while (i < longitud){
        if (arr[i].edad > max) {
            max = arr[i].edad;
            res = arr[i];
        }
        i  = i+1;
    }
    return res;
}

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud){
    persona_t res;
    float min = arr[0].altura;
    int i = 0;
    while (i < longitud){
        if (arr[i].altura < min) {
            min = arr[i].altura;
            res = arr[i];
        }
        i  = i+1;
    }
    return res;
}

int main(void) {
persona_t p1 = {"Paola", 21, 1.85, 75};
persona_t p2 = {"Luis", 54, 1.75, 69};
persona_t p3 = {"Julio", 40, 1.70, 80};
unsigned int longitud = 3;
persona_t arr[] = {p1, p2, p3};
printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
persona_t p = persona_de_mayor_edad(arr, longitud);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
p = persona_de_menor_altura(arr, longitud);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
}