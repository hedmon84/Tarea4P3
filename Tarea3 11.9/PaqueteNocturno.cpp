//
// Created by Hedmon lopez on 14/02/2018.
//

#include "PaqueteNocturno.h"

PaqueteNocturno::PaqueteNocturno() {


}

void PaqueteNocturno::PaqNocturno(int Cadicional) {

    this->Cadicional=Cadicional;


     total=valor+Cadicional*costoKg;


    cout<<"PaqNocturno total ="<<total;

}
