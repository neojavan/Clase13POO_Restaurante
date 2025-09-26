#include "Restaurante.h"

Restaurante::Restaurante() {
    // El constructor puede estar vacío si la inicialización de miembros es simple.
    // 'menu' se construye automáticamente.
}

Menu& Restaurante::getMenu() {
    return this->menu;
}

Pedido* Restaurante::crearPedido(const Cliente* cliente, const Mesa* mesa) {
    pedidos.emplace_back(proximoIdPedido, cliente, mesa);
    proximoIdPedido++;
    // Devuelve un puntero al último pedido creado.
    return &pedidos.back();
}

void Restaurante::cobrarPedido(Pedido* pedido) {
    if (pedido) {
        pedido->marcarComoPagado();
    }
}
