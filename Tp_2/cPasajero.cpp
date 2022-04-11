#include "cPasajero.h"

cPasajero::cPasajero(string _nombre, string _apellido)
{
	this->nombre = _nombre;
	this->apellido = _apellido;
	this->asiento = "";
	for(int i = 0; i < 4; i++)
		equipaje[i] = NULL;
	this->nrovuelo = 0;
}