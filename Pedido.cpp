#include "Pedido.h"
#include <iostream>

Pedido::Pedido(int id, const Cliente* cliente, const Mesa* mesa)
    : numeroID(id), pagado(false), cliente(cliente), mesa(mesa) {}

void Pedido::agregarProducto(const Producto& producto) {
    this->productos.push_back(producto);
}

float Pedido::calcularTotal() const {
    float total = 0.0f;
    // Bucle 'range-based for' para sumar los precios de los productos.
    for (const auto& producto : this->productos) {
        total += producto.getPrecio();
    }
    return total;
}

void Pedido::marcarComoPagado() {
    this->pagado = true;
}

void Pedido::mostrarDetalle() const {
    std::cout << "\n--- Detalle del Pedido #" << this->numeroID << " ---" << std::endl;
    std::cout << "Cliente: " << this->cliente->getNombre() << std::endl;
    std::cout << "Mesa: " << this->mesa->getNumero() << std::endl;
    std::cout << "Productos:" << std::endl;
    for (const auto& producto : this->productos) {
        std::cout << " - " << producto.getNombre() << "\t$" << producto.getPrecio() << std::endl;
    }
    std::cout << "Total: $" << this->calcularTotal() << std::endl;
    std::cout << "Estado: " << (this->pagado ? "Pagado" : "Pendiente") << std::endl;
    std::cout << "--------------------------" << std::endl;
}
