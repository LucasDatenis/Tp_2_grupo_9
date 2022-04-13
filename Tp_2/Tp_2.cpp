#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include "cPasajero.h"

using namespace std;

int main()
{
    Pasajero* pasajero1 = new Pasajero("Lucas", "Datenis");

    pasajero1->imprimir_pasajero();

    system("pause");
    return 0;
}

