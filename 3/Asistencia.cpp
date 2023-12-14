#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum estadoAsistencia{
    Asistio,
    Falta,
    Justificada,
    Tarde,
};

struct Asistencia{
    string fecha;
    string materia;
    estadoAsistencia estado;
};