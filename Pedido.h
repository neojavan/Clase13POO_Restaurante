#ifndef PEDIDO_H
#define PEDIDO_H

#include "Producto.h"
#include "Cliente.h"
#include "Mesa.h"
#include <vector>

class Pedido {
private:
    int numeroID;
    bool pagado;
    // Asociación: El pedido está "realizado por" un Cliente y "ubicado en" una Mesa.
    // Guardamos punteros para no copiar los objetos, solo referenciarlos.
    const Cliente* cliente;
    const Mesa* mesa;
    // El pedido "contiene" productos.
    std::vector<Producto> productos;

public:
    Pedido(int id, const Cliente* cliente, const Mesa* mesa);

    void agregarProducto(const Producto& producto);
    float calcularTotal() const;
    void marcarComoPagado();
    void mostrarDetalle() const;
};

#endif //PEDIDO_H
