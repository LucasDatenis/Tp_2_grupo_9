#include "cPasajero.h"

Pasajero::Pasajero(string _nombre, string _apellido, long int dni , int cant_equipaje = MAX)
{
	this->nombre = _nombre;
	this->apellido = _apellido;
	this->DNI = dni;
	for (int i = 0; i < cant_equipaje; i++)
		equipaje[i] = NULL;
}

bool Pasajero::agregarequipaje(float peso) {
	float peso_total = 0;
	for (int i = 0; i < cant_equipaje; i++)
	{
		if(equipaje[i] == NULL)
			equipaje[i] = peso;
		else
			i++;
		peso_total = +peso;
	}
	if (peso_total > 25)
		return false;
	else
		return true;
}


void Pasajero::imprimir_pasajero()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "DNI: " << DNI << endl;
}