//
// Created by Hedmon lopez on 07/02/2018.
//

#ifndef CUENTABAN_CUENTA_H
#define CUENTABAN_CUENTA_H

#include <iostream>
using  namespace std;

class Cuenta {
public:
    Cuenta();


    void setSaldo_Inicial(float );
    float  getSaldo_Inicial();

    void Credito(float );
    void Miembro_Cargar(float);
    void obtenerSaldo();


protected:

    float  saldo;
    float  Agregarsaldo;
    float  RetirarSaldo;






};


#endif //CUENTABAN_CUENTA_H
