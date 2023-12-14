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

struct Estudiante{
    string nombre;
    int edad;
    vector<string> materias;
    vector<Asistencia> asistencias;
};

void registrarMateria(Estudiante& est, const string& fecha, const string& materia, estadoAsistencia estado){
    Asistencia nuevaAsistencia = {fecha, materia, estado};
    est.asistencias.push_back(nuevaAsistencia);
}
