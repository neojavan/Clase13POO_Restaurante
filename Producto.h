#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

// DECLARACIÓN DE LA CLASE PRODUCTO
// Funciona como el contrato o la API de la clase.
class Producto {
private:
    // Atributos (Datos Miembro) que definen el estado de un producto.
    std::string nombre;
    float precio;
    std::string descripcion;

public:
    // Constructor para inicializar un objeto Producto en un estado válido.
    Producto(std::string nombre, float precio, std::string descripcion);

    // Métodos públicos (getters) para acceder a los datos privados de forma controlada.
    std::string getNombre() const;
    float getPrecio() const;
};

#endif //PRODUCTO_H
