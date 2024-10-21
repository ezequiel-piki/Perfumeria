#pragma once
#include "Persona.h"
class Vendedor:public Persona{

public:

//GETTERS
float getSueldo();
Fecha getFechaIngresoALaEmpresa();
int getIdVendedor();

//SETTERS
void setSueldo(float sueldo);
void setFechaIngresoALaEmpresa(Fecha fecha);
void setIdVendedor(int idVendedor);

private:

float sueldo;
Fecha fechaIngresoALaEmpresa;
int idVendedor;

};
