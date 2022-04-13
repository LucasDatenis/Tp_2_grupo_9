#pragma once

#include <iostream>
#include <string>
#include <cstdio>
#include "Fechas.h"

#define MAX 4

using namespace std;


class Pasajero {
	long int DNI;
	string nombre;
	string apellido;
	unsigned int nrovuelo;
	string asiento;
	float* equipaje;
	int cant_equipaje = 0;
	//time_t fecha;
public:
	Pasajero(string _nombre, string _apellido, long int dni, int cant_equipaje = MAX);
	//Pasajero(unsigned int nrovuelo, time_t fecha);
	~Pasajero();

	bool verifico_letas(string palabra);
	bool verifico_numeros(double numero);

	bool agregarequipaje(float peso);
	void imprimir_pasajero();
};
