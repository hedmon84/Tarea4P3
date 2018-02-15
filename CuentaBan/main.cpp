#include <iostream>
#include "Cuenta.h"
using namespace std;

int main() {
    Cuenta banc;

    float  saldo;
    float agregar;
    float  retirar;
    cout << "Cuenta Bancaria" << std::endl;



    cout<<"Ingrese Saldo inicial: ";
    cin>>saldo;
    banc.setSaldo_Inicial(saldo);
    cout<<"Agregar Monto al saldo Actual: ";
    cin>>agregar;
    banc.Credito(agregar);
    cout<<"Cuanto es el Monto que desea Retirar ? : ";
    cin>>retirar;
    banc.Miembro_Cargar(retirar);
    cout<<"Su saldo actual es = ";
    banc.obtenerSaldo();





    return 0;
}