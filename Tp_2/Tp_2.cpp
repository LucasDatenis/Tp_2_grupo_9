#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include "Funciones.h"

using namespace std;


int main()
{
    bool verificacion = true;

    Pasajero* pasajero1 = new Pasajero("Lucas", "Datenis", 44710445, 5, 3);
    Pasajero* pasajero2 = new Pasajero("Juan Manuel", "Rodriguez", 44711225, 4, 6);

    pasajero1->imprimir_pasajero();
    pasajero2->imprimir_pasajero();



    verificacion = bucle_equipaje(pasajero1);
    if (verificacion == false)
    {
        cout << "EL peso de las valijas supera el total permitido por persona" << endl;
        exit(1);
    }
    

    pasajero1->imprimir_equipaje();

    delete pasajero1;
    delete pasajero2;

    system("pause");
    return 0;
}