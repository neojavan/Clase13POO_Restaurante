#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
private:
    std::string nombre;
public:
    Cliente(std::string nombre);
    std::string getNombre() const;
};

#endif //CLIENTE_H
