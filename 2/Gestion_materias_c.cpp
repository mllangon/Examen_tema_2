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

