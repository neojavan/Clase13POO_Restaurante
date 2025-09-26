#include "Menu.h"
#include <iostream>

void Menu::agregarProducto(const Producto& producto) {
    // Agrega una copia del producto al vector.
    this->productos.push_back(producto);
}

void Menu::mostrarMenu() const {
    std::cout << "--- MENU DEL RESTAURANTE ---" << std::endl;
    for (size_t i = 0; i < productos.size(); ++i) {
        std::cout << i << ". " << productos[i].getNombre() << " - $" << productos[i].getPrecio() << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
}

// Devuelve un puntero al producto para evitar copias innecesarias.
Producto* Menu::getProducto(const int indice) {
    if (indice >= 0 && indice < productos.size()) {
        return &productos[indice];
    }
    return nullptr; // Devuelve nullptr si el índice es inválido.
}
