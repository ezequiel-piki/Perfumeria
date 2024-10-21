#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
class Fecha{
public:

    Fecha(int dia, int mes, int anio);
    Fecha          ()        ;


    //GETTERS
    int getDia() ;
    int getMes() ;
    int getAnio();
    //SETTERS
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    std::string toString();

private:
    int dia ;
    int mes ;
    int anio;
};


#endif // FECHA_H_INCLUDED
