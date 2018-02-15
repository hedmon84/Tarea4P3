//
// Created by Hedmon lopez on 07/02/2018.
//

#include "Factura.h"

Factura::Factura(){

}

void Factura::setNumero_Pieza(string Npieza) {
    this->Npieza=Npieza;
}

void Factura::setDesc_Pieza(string Dpieza) {

    this->Dpieza=Dpieza;
}


void Factura::setCant_Comprar(int canArticulos) {

    this->canArticulos=canArticulos;

}

void Factura::setPrecio_Art(int PrecioArt) {

    this->PrecioArt=PrecioArt;

}


string Factura::getNumero_Pieza() {

    return Npieza;
}

string Factura::getDesc_Pieza() {
    return Dpieza;
}

int Factura::getCant_Comprar() {
    return  canArticulos;
}
int Factura::getPrecio_Art() {
    return PrecioArt;
}

void Factura::MontoFactura() {

    cout<<canArticulos*PrecioArt;

}