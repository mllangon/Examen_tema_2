#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Estudiante{
    std::string nombre;
    int edad;
    float promedio;
    vector<string> materias;
};

void agregarMateria(Estudiante& est, const string& materia){
    est.materias.push_back(materia);
}



