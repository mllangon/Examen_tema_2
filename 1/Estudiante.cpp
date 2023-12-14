#include <iostream>
#include <string>
using namespace std;

struct Estudiante{
    std::string nombre;
    int edad;
    float promedio;
};

void mostrarEstudiante(const Estudiante& estudiante){
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

int main(){
    Estudiante estudiante;
    cout<< "Ingrese el nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    cout<< "Ingrese la edad del estudiante: ";
    cin>> estudiante.edad;

    cout<< "Ingrese el promedio del estudiante: ";
    cin>> estudiante.promedio;

    mostrarEstudiante(estudiante);

    return 0;
}