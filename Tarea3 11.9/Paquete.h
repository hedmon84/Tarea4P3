//
// Created by Hedmon lopez on 14/02/2018.
//

#ifndef TAREA3_11_9_PAQUETE_H
#define TAREA3_11_9_PAQUETE_H

#include <string>
#include <iostream>

using namespace std;


class Paquete {

public:
    Paquete ();

    void CalcularCosto(double);



protected:

    string nombre;
    string direccion;
    string ciudad;
    string estado;
    int postalcode;
    double peso;
    int valor;
    int costoKg;


};


#endif //TAREA3_11_9_PAQUETE_H
