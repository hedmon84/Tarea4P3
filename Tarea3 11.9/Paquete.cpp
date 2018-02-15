//
// Created by Hedmon lopez on 14/02/2018.
//

#include "Paquete.h"

Paquete::Paquete():peso(0),costoKg(20){

}

void Paquete::CalcularCosto(double peso) {

    this->peso=peso;


   valor=peso*costoKg;


    cout<<"Paquete dos dias  Total = ";
    cout<<valor;
    cout<<endl;



}

