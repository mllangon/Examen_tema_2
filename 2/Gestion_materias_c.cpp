#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_MATERIAS 50
#define MAX_NOMBRE 50

struct Estudiante {
    char nombre[MAX_NOMBRE];
    int edad;
    char materias[MAX_MATERIAS][MAX_NOMBRE];
    int num_materias;
};

void agregarMateria(struct Estudiante *est, const char *materia) {
    if (est->num_materias < MAX_MATERIAS) {
        strcpy(est->materias[est->num_materias], materia);
        est->num_materias++;
    } else {
        printf("No se pueden agregar mas materias\n");
    }
}

void eliminarMateria(struct Estudiante *est, const char *materia) {
    if (est->num_materias < MAX_MATERIAS) {
        strcpy(est->materias[est->num_materias], materia);
        est->num_materias++;
    } else {
        printf("No se pueden agregar mas materias\n");
    }
}