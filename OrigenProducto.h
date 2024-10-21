#pragma once

class OrigenProducto{
public:
    //GETTERS
    int getIdOrigen();
    const char getNombre();
    //SETTERS
    void setIdOrigen(int id);
    void setNombre(const char*);
private:
    int idOrigen;
    char[50] nombre;
};


