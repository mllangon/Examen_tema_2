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
    estudiante.nombre[strcspn(estudiante.nombre, "\n")] = 0;

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);
    getchar();

    estudiante.num_materias = 0;

    do {
        printf("\n1. Agregar materia\n2. Eliminar materia\n3. Mostrar materias\n4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                printf("Ingrese la materia a agregar: ");
                fgets(materia, MAX_NOMBRE, stdin);
                materia[strcspn(materia, "\n")] = 0; // Remover el salto de línea
                agregarMateria(&estudiante, materia);
                break;
            case 2:
                printf("Ingrese la materia a eliminar: ");
                fgets(materia, MAX_NOMBRE, stdin);
                materia[strcspn(materia, "\n")] = 0; // Remover el salto de línea
                eliminarMateria(&estudiante, materia);
                break;
            case 3:
                mostrarMaterias(&estudiante);
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}