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
    for (int i = 0; i < est->num_materias; i++) {
        if (strcmp(est->materias[i], materia) == 0) {
            for (int j = i; j < est->num_materias - 1; j++) {
                strcpy(est->materias[j], est->materias[j + 1]);
            }
            est->num_materias--;
            break;
        }
    }
}

void mostrarMaterias(const struct Estudiante *est) {
    printf("Materias: %s:\n", est->nombre);
    for (int i = 0; i < est->num_materias; i++) {
        printf("%s\n", est->materias[i]);
    }
}

int main() {
    struct Estudiante estudiante;
    char materia[MAX_NOMBRE];
    int opcion;

    printf("Ingrese el nombre del estudiante: ");
    fgets(estudiante.nombre, MAX_NOMBRE, stdin);
    estudiante.nombre[strlen(estudiante.nombre) - 1] = '\0';

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);
    getchar();

    estudiante.num_materias = 0;
}