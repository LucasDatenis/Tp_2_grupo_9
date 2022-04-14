#include "Funciones.h"


bool bucle_equipaje(Pasajero* puntero)
{
    bool comprobar = true;
    float peso = 0;
    for (int i = 0; i < puntero->getelista(); i++)
    {
        cout << "Igrese el peso de la valija nro " << i + 1 << ": ";
        cin >> peso;
        comprobar = puntero->agregarequipaje(peso);
        if (comprobar == false)
            return false;
        else
            i++;
    }
    return true;
}
