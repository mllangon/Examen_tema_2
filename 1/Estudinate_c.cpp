#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void mostrarEstudiante(const struct Estudiante *est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %.2f\n", est->promedio);
}

int main() {
    struct Estudiante estudiante;

    printf("Ingrese el nombre del estudiante: ");
    fgets(estudiante.nombre, 50, stdin);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);

    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante.promedio);

    mostrarEstudiante(&estudiante);

    return 0;
}