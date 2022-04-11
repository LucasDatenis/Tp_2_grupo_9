#pragma once

#include <iostream>
#include <string>
#include <cstdio>
#include "Fechas.h"

#define MAX 4

using namespace std;


class cPasajero {
	const long int DNI = 0;
	string nombre;
	string apellido;
	unsigned int nrovuelo;
	string asiento;
	float equipaje[MAX];
	//time_t fecha;
public:
	cPasajero(string _nombre, string _apellido);
	cPasajero(const long int DNI);
	//Pasajero(unsigned int nrovuelo, time_t fecha);
	~cPasajero();
	void imprimir_pasajero();
};
