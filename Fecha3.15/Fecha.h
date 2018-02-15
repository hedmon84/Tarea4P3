//
// Created by Hedmon lopez on 08/02/2018.
//

#ifndef FECHA3_15_FECHA_H
#define FECHA3_15_FECHA_H

#include <iostream>
using  namespace std;
class Fecha {

public:

    Fecha ();
    Fecha(double ,double , double);

    void setMes(double);
    void setDia(double );
    void  setYear(double);

    double getMes();
    double getDia();
    double getYear();

    void mostrarFecha();

public:

    double mes;
    double dia;
    double year;

};


#endif //FECHA3_15_FECHA_H
