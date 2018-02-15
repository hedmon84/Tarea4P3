#include <iostream>
using namespace std;

#include "Paquete.h"
#include "PaqueteNocturno.h"
#include "Derivada.h"

int main(){

    Paquete a;
    Derivada b;
    PaqueteNocturno c;

    a.CalcularCosto(5);
    b.PaqueteDosDias(10);
    c.PaqNocturno(15);


    return 0;
}