//
// Created by Hedmon lopez on 07/02/2018.
//

#include "Cuenta.h"

 Cuenta::Cuenta() {
     saldo=0;
}

void Cuenta::setSaldo_Inicial(float saldo) {

    if(saldo>=0){

        this->saldo=saldo;

    } else  cout<<"Saldo Inicial no valido" <<endl,exit(-1);


}

float Cuenta::getSaldo_Inicial() {

    return saldo;
}


void Cuenta::Credito(float agregarSaldo) {

   this->Agregarsaldo=agregarSaldo;

    this->saldo=agregarSaldo+saldo;


}

void Cuenta::Miembro_Cargar(float RetirarSaldo) {



    if(RetirarSaldo>saldo){
        cout<<"El monto a cargar excede el saldo de la cuenta"<<endl,exit(-1);

    } else this->saldo=saldo-RetirarSaldo;

}

void Cuenta::obtenerSaldo() {
    cout<<saldo;

}