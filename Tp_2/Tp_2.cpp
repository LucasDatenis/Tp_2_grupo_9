#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include "cPasajero.h"

using namespace std;

int main()
{
    Pasajero* pasajero1 = new Pasajero("Lucas", "Datenis", 44710445, 5);
    Pasajero* pasajero2 = new Pasajero("Juan Manuel", "Rodriguez", 44711225, 9);

    pasajero1->imprimir_pasajero();
    pasajero2->imprimir_pasajero();

    bool verificacion = true;
    
    verificacion = pasajero1->agregarequipaje(16.4);
    if (verificacion == false)
    {
        cout << "EL peso de las valijas supera el total permitifo por persona" << endl;
        verificacion = true;
        exit(1);
    }
    
    pasajero1->imprimir_equipaje();

    delete pasajero1;
    delete pasajero2;

    system("pause");
    return 0;
}



