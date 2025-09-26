#include <iostream>
#include "Restaurante.h"
#include "Cliente.h"
#include "Mesa.h"
#include "Producto.h"
#include "Pedido.h"



int main() {
    // 1. Se crea la instancia principal del Restaurante.
    // Este objeto actuará como el orquestador de todo el sistema.
    Restaurante miRestaurante;

    // 2. Se crean los productos que estarán disponibles en el menú.
    // Son objetos independientes que definen lo que se puede vender.
    Producto p1("Hamburguesa Clasica", 25000, "Carne de res con queso y tocineta");
    Producto p2("Pizza de Pepperoni", 28000, "Pizza personal con borde de queso");
    Producto p3("Gaseosa", 5000, "Botella de 400ml");

    // 3. Se agregan los productos al menú del restaurante.
    // Se accede al menú a través del método público del restaurante.
    miRestaurante.getMenu().agregarProducto(p1);
    miRestaurante.getMenu().agregarProducto(p2);
    miRestaurante.getMenu().agregarProducto(p3);

    // Se muestra el menú para verificar que los productos se agregaron correctamente.
    miRestaurante.getMenu().mostrarMenu();

    // 4. Se crean entidades independientes que interactuarán en el sistema.
    Cliente cliente1("Javier");
    Mesa mesa5(5);

    // 5. El Restaurante crea y gestiona un nuevo pedido.
    // Se pasa la dirección de memoria del cliente y la mesa (Asociación).
    std::cout << "\nCreando un nuevo pedido..." << std::endl;
    Pedido* pedidoDeJavier = miRestaurante.crearPedido(&cliente1, &mesa5);

    // 6. Se agregan productos al pedido recién creado.
    // Obtenemos los productos del menú y los agregamos al pedido.
    pedidoDeJavier->agregarProducto(*miRestaurante.getMenu().getProducto(0)); // Hamburguesa
    pedidoDeJavier->agregarProducto(*miRestaurante.getMenu().getProducto(2)); // Gaseosa

    // 7. Se muestra el estado del pedido antes de pagar.
    // Se invoca un método del objeto Pedido para ver su estado actual.
    pedidoDeJavier->mostrarDetalle();

    // 8. El restaurante procesa el pago del pedido.
    std::cout << "\nCobrando el pedido..." << std::endl;
    miRestaurante.cobrarPedido(pedidoDeJavier);

    // 9. Se muestra el estado final del pedido para confirmar el pago.
    pedidoDeJavier->mostrarDetalle();

    return 0;
}

