#ifndef MENU_H
#define MENU_H

#include "Producto.h"
#include <vector>

class Menu {
private:
    // Agregación: El Menú "se compone de" Productos.
    // Usamos un vector para almacenar múltiples objetos Producto.
    std::vector<Producto> productos;

public:
    void agregarProducto(const Producto& producto);
    void mostrarMenu() const;
    // Función para obtener un producto (simulación, puede ser más compleja)
    Producto* getProducto(int indice);
};

#endif //MENU_H
