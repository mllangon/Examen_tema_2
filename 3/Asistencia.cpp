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

void registrarAsistencia(Estudiante& est, const string& fecha, const string& materia, estadoAsistencia estado){
    Asistencia nuevaAsistencia = {fecha, materia, estado};
    est.asistencias.push_back(nuevaAsistencia);
}

void MostrarAsistencia(const Estudiante& est) {
    cout << "Asistencias: " << est.nombre << ":\n";
    for (const auto &asistencia: est.asistencias) {
        std::cout << "Fecha: " << asistencia.fecha
                  << ", Materia: " << asistencia.materia
                  << ", Estado: "
                  << (asistencia.estado == Asistio ? "Asistio" : asistencia.estado == Falta ? "Falta" : asistencia.estado == Justificada ? "Justificada" : asistencia.estado == Tarde ? "Tarde" : "Desconocido")
                  << std::endl;
    }
}

int main() {
    Estudiante estudiante;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    registrarAsistencia(estudiante, "2021-09-01", "Matematicas", Asistio);
    registrarAsistencia(estudiante, "2021-09-02", "Matematicas", Falta);
    registrarAsistencia(estudiante, "2021-09-03", "Matematicas", Justificada);
    registrarAsistencia(estudiante, "2021-09-04", "Matematicas", Tarde);

    MostrarAsistencia(estudiante);

    return 0;
}
