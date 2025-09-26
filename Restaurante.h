#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include "Menu.h"
#include "Pedido.h"
#include <vector>

class Restaurante {
private:
    // Composición: El Restaurante "tiene un" Menú. El Menú es parte integral del Restaurante.
    Menu menu;
    // Agregación: El Restaurante "gestiona" Pedidos.
    std::vector<Pedido> pedidos;
    int proximoIdPedido = 1;

public:
    Restaurante(); // Constructor

    // Método para obtener una referencia al menú y poder agregarle productos desde fuera.
    Menu& getMenu();

    // Métodos de negocio principales.
    Pedido* crearPedido(const Cliente* cliente, const Mesa* mesa);
    void cobrarPedido(Pedido* pedido);
};

#endif //RESTAURANTE_H
