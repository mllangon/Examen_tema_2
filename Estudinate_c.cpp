#include<stdio.h>

struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};

void mostrarEstudiante(const Estudiante& *est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %f\n", est->promedio);
}