#pragma once

#include <iostream>
#include <string>
#include <cstring>
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
	int equipaje_lista;
	int equipaje_actual;
	float peso_total;	//time_t fecha;
public:
	Pasajero(string _nombre, string _apellido, long int dni, unsigned int _nrovuelo, int equipaje_lista);
	//Pasajero(unsigned int nrovuelo, time_t fecha);
	~Pasajero();

	bool verifico_letas(string palabra);
	bool verifico_numeros(long int entero);

	bool agregarequipaje(float peso);

	string getnombre(){ return nombre; }
	string getapellido() { return apellido;	}
	int getelista() { return equipaje_lista; }

	void imprimir_pasajero();
	void imprimir_equipaje();
};
