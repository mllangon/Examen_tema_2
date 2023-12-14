#include <stdio.h>
#include <stdlib.h>

#define ERROR_REGISTRO_ASISTENCIA -1
#define EXITO 0

int funcionRiesgosa() {
    return ERROR_REGISTRO_ASISTENCIA;
}

int main() {
    int resultado = funcionRiesgosa();
    if (resultado == ERROR_REGISTRO_ASISTENCIA) {
        fprintf(stderr, "Error al registrar asistencia.\n");
    }

    return 0;
}