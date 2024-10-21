#pragma once
#include "Persona.h"
#include "Fecha.h"
class Cliente:public Persona{

public:

//SETTERS
void setIdCliente();
void setFechaRegistro(Fecha fecha);
void setDeuda(float deuda);
void setCantidadCompras(int cantidadCompras);
void setGastoTotalCompras(float gastoCompra);


//GETTERS
int getIdCliente();
Fecha getFechaRegistro();
float getDeuda();
int getCantidadCompras();
float getGastoTotalCompras();

private:
int idCliente;
Fecha fechaRegistro;
float deuda;
int cantidadCompras;
float gastoTotalCompras;
};
