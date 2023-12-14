#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<limits>

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
    std::string materia;
    int opcion;

    std::cout << "Ingrese el nombre del estudiante: ";
    getline(std::cin, estudiante.nombre);

    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudiante.edad;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    do {
        std::cout << "\n1. Agregar materia\n2. Eliminar materia\n3. Mostrar materias\n4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

