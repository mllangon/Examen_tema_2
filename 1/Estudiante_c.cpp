#include<stdio.h>

struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};

// Corrección: Estudiante debe ser pasado como puntero y usar el operador '->' para acceder a sus miembros.
void mostrarEstudiante(const struct Estudiante *estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %f\n", estudiante->promedio);
}

int main() {
    struct Estudiante estudiante;

    printf("Ingrese el nombre del estudiante: ");
    // Corrección: Usar fgets en lugar de scanf para leer cadenas de texto, evitando problemas con espacios.
    fgets(estudiante.nombre, 50, stdin);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);

    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante.promedio);

    mostrarEstudiante(&estudiante);

    return 0;
}