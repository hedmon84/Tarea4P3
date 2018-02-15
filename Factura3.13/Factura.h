//
// Created by Hedmon lopez on 07/02/2018.
//

#ifndef FACTURA3_13_FACTURA_H
#define FACTURA3_13_FACTURA_H

#include <string>
#include <iostream>
using namespace std;
class Factura {

public:

    Factura();

    void setNumero_Pieza(string );
    void setDesc_Pieza(string );
    void setCant_Comprar(int );
    void setPrecio_Art(int );

    string getNumero_Pieza();
    string getDesc_Pieza();
    int getCant_Comprar();
    int getPrecio_Art();

    void MontoFactura();


public:


protected:

    string Npieza ;
    string Dpieza;
    int  canArticulos;
    int PrecioArt;

};


#endif //FACTURA3_13_FACTURA_H
