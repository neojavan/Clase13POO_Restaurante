#include "Producto.h"

// IMPLEMENTACIÓN DE LOS MÉTODOS DE LA CLASE PRODUCTO

// Implementación del constructor.
// Se usa la lista de inicializadores (:) para asignar los valores a los atributos.
Producto::Producto(std::string nombre, float precio, std::string descripcion)
    : nombre(nombre), precio(precio), descripcion(descripcion) {
    // El cuerpo del constructor está vacío porque toda la inicialización se hizo arriba.
}

// Implementación del getter para el nombre.
std::string Producto::getNombre() const {
    // this-> es opcional aquí, pero clarifica que 'nombre' es un miembro de la clase.
    return this->nombre;
}

// Implementación del getter para el precio.
float Producto::getPrecio() const {
    return this->precio;
}
