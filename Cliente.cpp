#include "Cliente.h"

Cliente::Cliente(std::string nombre) : nombre(nombre) {}

std::string Cliente::getNombre() const {
    return this->nombre;
}
