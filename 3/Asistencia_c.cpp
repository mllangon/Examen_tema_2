#include <stdio.h>
#include <string.h>

#define MAX_MATERIAS 20
#define MAX_ASISTENCIAS 50
#define MAX_NOMBRE 50

typedef enum {
    Asistio,
    Falta,
    Tardanza
} EstadoAsistencia;

struct Asistencia {
    char fecha[11];
    char materia[MAX_NOMBRE];
    EstadoAsistencia estado;
};

struct Estudiante {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][MAX_NOMBRE];
    int cantidadMaterias;
    struct Asistencia registroAsistencia[MAX_ASISTENCIAS];
    int cantidadAsistencias;
};

void registrarAsistencia(struct Estudiante *est, const char *fecha, const char *materia, EstadoAsistencia estado) {
    if (est->cantidadAsistencias < MAX_ASISTENCIAS) {
        strcpy(est->registroAsistencia[est->cantidadAsistencias].fecha, fecha);
        strcpy(est->registroAsistencia[est->cantidadAsistencias].materia, materia);
        est->registroAsistencia[est->cantidadAsistencias].estado = estado;
        est->cantidadAsistencias++;
    }
}

void mostrarAsistencias(const struct Estudiante *est) {
    printf("Asistencias de %s:\n", est->nombre);
    for (int i = 0; i < est->cantidadAsistencias; i++) {
        printf("Fecha: %s, Materia: %s, Estado: %s\n",
               est->registroAsistencia[i].fecha,
               est->registroAsistencia[i].materia,
               est->registroAsistencia[i].estado == Asistio ? "Asistió" : est->registroAsistencia[i].estado == Falta ? "Falta" : "Tardanza");
    }
}