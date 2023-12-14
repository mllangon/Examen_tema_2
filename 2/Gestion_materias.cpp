#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct Estudiante{
    std::string nombre;
    int edad;
    vector<string> materias;
};

void agregarMateria(Estudiante& est, const string& materia){
    est.materias.push_back(materia);
}

void eliminarMateria(Estudiante& est, const string& materia) {
    auto it = find(est.materias.begin(), est.materias.end(), materia);
    if(it != est.materias.end() ) {
        est.materias.erase(it);
    }
}

void mostrarMaterias (const Estudiante& est) {
    cout<< "Materias: " << est.nombre << ":\n";
    for (const auto& materia : est.materias) {
        cout<< materia << endl;
    }
}

int main() {
    Estudiante estudiante;
    cout<< "Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    cout<< "Ingrese la edad del estudiante: ";
    cin>> estudiante.edad;


}