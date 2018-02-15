//
// Created by Hedmon lopez on 08/02/2018.
//

#include "Fecha.h"

Fecha::Fecha(){

}

Fecha::Fecha(double dia, double mes , double year) {

    this->dia=dia;
    this->mes=mes;
    this->year=year;


}

void Fecha::setDia(double dia) {
    this->dia=dia;
}

void Fecha::setMes(double mes) {

    if(mes==1,2,3,4,5,6,7,8,9,10,11,12){
        this->mes=mes;
    } else this->mes=1;
}

void Fecha::setYear(double year) {

    this->year=year;
}


double Fecha::getDia() {
    return dia;
}

double Fecha::getMes() {
    return  mes;
}

double Fecha::getYear() {
    return  year;
}

void Fecha::mostrarFecha(){

    cout<<this->dia<<"/"<<this->mes<<"/"<<this->year;

}