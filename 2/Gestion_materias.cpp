#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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

void eliminarMateria(Estudiante& est, const string& materia) {
    auto it = find(est.materias.begin(), est.materias.end(), materia);
    if(it != est.materias.end() ) {
        est.materias.erase(it);
    }
}

