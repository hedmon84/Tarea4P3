#include <iostream>
#include "Factura.h"
using namespace std;

int main() {
    Factura fact;


    string Npieza;
    string Dpieza;
    int canArticulos;
    int PrecioArt;



    cout<<"**Ferreteria**\n";

    cout<<"Ingrese Numero de Pieza = ";
    cin>>Npieza;
    fact.setNumero_Pieza(Npieza);
    cout<<"Ingrese Descripcion De la Pieza = ";
    cin>>Dpieza;
    fact.setDesc_Pieza(Dpieza);
    cout<<"Ingrese Cantidad de Articulos de compra =";
    cin>>canArticulos;
    fact.setCant_Comprar(canArticulos);
    cout<<"Ingrese Precio del Articulo = ";
    cin>>PrecioArt;
    fact.setPrecio_Art(PrecioArt);

    cout<<"------------------------\n";

    cout<<"**Factura**\n";
    cout<<"Numero de Pieza= "<<fact.getNumero_Pieza()<<endl;
    cout<<"Descripcion = "<<fact.getDesc_Pieza()<<endl;
    cout<<"Cantidad = "<<fact.getCant_Comprar()<<endl;
    cout<<"Precio= "<<fact.getPrecio_Art()<<endl;
    cout<<"Total a pagar = ";
    fact.MontoFactura();



    return 0;
}