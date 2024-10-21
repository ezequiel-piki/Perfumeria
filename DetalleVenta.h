#pragma once
#include "Fecha.h"
class DetalleVenta{

public:

    //SETTERS
    void setIdVenta(int idVenta);
    void setIdProducto(int idProducto);
    void setCantidad(int cantidad);
    void setPrecio(float precio);
    void setEstado(bool estado);

    //GETTERS
    int getIdVenta();
    int getIdProducto();
    int getCantidad();
    float getPrecio();
    bool getEstado();

private:
    int idVenta;
    int idProducto;
    int cantidad;
    float precio;
    bool estado;

};
