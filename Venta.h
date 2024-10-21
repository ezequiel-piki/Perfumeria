#pragma once
#include "Fecha.h"
class Venta{
public:

    //SETTERS
    void setIdVenta(int idVenta);
    void setIdCliente(int idVenta);
    void setIdVendedor(int idVenta);
    void setFormaDePago(const char *);
    void setEnvio(bool envio);
    void setPrecio(float precio);
    void setEstado(bool);

    //GETTERS
    int getIdVenta();
    Fecha getFecha();
    int getIdCliente();
    int getIdVendedor();
    char * getFormaDePago();
    bool getEnvio();
    float getPrecio();
    bool getEstado();
private:
    int idVenta;
    Fecha fecha;
    int idcliente;
    int idVendedor;
    char[50] formaDePago;
    bool envio;
    float precio;
    bool estado;
};



