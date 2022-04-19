#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

class Avion {
private:
	string ID;
	float Peso;
	int total_pasajeros;
	int cant_pasajeros;
	string estado;
public:
#pragma once Constructores y destructores 
	Avion(string ID, float peso, int total_pasajeros, int cant_pasajeros, string estado);
	~Avion();
#pragma once funciones para controles
	bool control_letras(string palbra);
	bool control_numeros_enteros(int numeros);
	bool control_numeros_flotantes(float numeros);

};