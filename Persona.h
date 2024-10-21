#pragma once
#include "Fecha.h"
class Persona{
public:

    //GETTERS
    int    getDni     ();
    char * getNombre  ();
    char * getApellido();
    Fecha  getFecha   ();
    bool   getEstado  ();
    char * getTelefono();
    char * getMail    ();

    //SETTERS
    void setDni      (int dni)     ;
    void setNombre   (const char *);
    void setApellidos(const char *);
    void setEstado   (bool estado) ;
    void setTelefono (const char *);
    void setMail     (const char *);

private:
    int      dni       ;
    char[50] nombre    ;
    char[50] apellidos ;
    Fecha    nacimiendo;
    bool     estado    ;
    char[50] telefono  ;
    char[50] mail      ;
};



