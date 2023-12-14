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