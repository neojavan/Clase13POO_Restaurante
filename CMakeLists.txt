cmake_minimum_required(VERSION 4.0)
project(Clase13POO_Restaurante)

set(CMAKE_CXX_STANDARD 20)

add_executable(Clase13POO_Restaurante main.cpp
        Producto.cpp
        Producto.h
        Menu.cpp
        Menu.h
        Cliente.cpp
        Cliente.h
        Mesa.cpp
        Mesa.h
        Pedido.cpp
        Pedido.h
        Restaurante.cpp
        Restaurante.h)
