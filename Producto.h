#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
class Producto{
    public:

    //SETTERS
   // void setIdProducto();
    void setStockActual(int stockActual);
    void setStockMinimo(int stockMinimo);
    void setPrecio(float precio);
    void setNombre(const char*);
    //void setIdOrigen();
    void setEstado(bool estado);

    //GETTERS
    int getIdProducto();
    int getStockManual();
    int stockMinimo();
    float getPrecio();
    char * getNombre();
    int getIdOrigen();
    bool getEstado();

    private:

    int idProducto;
    int stockActual;
    int stockMinimo;
    float precio;
    char[100] nombre;
    int idOrigen;
    bool estado;

};


#endif // PRODUCTO_H_INCLUDED
