#include <iostream>
#include <vector>
#include <string>
#include <exception>

class AsistenciaException : public std::exception {
public:
    AsistenciaException(const char* message) : msg_(message) {}

    virtual const char* what() const throw () {
        return msg_.c_str();
    }

private:
    std::string msg_;
};

void funcionRiesgosa() {

    throw AsistenciaException("Error al registrar asistencia.");
}

int main() {
    try {
        funcionRiesgosa();
    } catch (const AsistenciaException& e) {
        std::cerr << "Excepcion capturada: " << e.what() << std::endl;
    }

    return 0;
}