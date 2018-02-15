//
// Created by Hedmon lopez on 14/02/2018.
//

#ifndef TAREA3_11_9_PAQUETENOCTURNO_H
#define TAREA3_11_9_PAQUETENOCTURNO_H

#include "Paquete.h"

class PaqueteNocturno: public Paquete {

public:

    void PaqNocturno(int);


    PaqueteNocturno();

protected:

    int Cadicional;
    int Kcosto=20;
    int total;



};


#endif //TAREA3_11_9_PAQUETENOCTURNO_H
