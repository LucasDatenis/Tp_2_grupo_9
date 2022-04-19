#include "cAvion.h"

Avion::Avion(string ID, float peso, int total_pasajeros, int cant_pasajeros, string estado)
{

}







bool Avion::control_letras(string palabra)
{
	string auxiliar = "";
	int a = 0;
	for (int i = 0; i < palabra.length(); i++)
	{
		if (palabra[i] == ' ')
			i++;
		else if (isalpha(palabra[i]) == 0)
			return false;
		else
		{
			auxiliar[a] = tolower(palabra[i]);
			a++;
		}
	}

	if (auxiliar == "arrivo" || auxiliar == "despegar" || auxiliar == "solicitar aterrizaje" || auxiliar == "solicitar despegue")
		return true;
	else
		return false;
}

bool Avion::control_numeros_enteros(int numeros)
{
	string entero;
	if (numeros < 0)
		return false;
	else if (numeros == 0)
		return false;
	else
	{
		entero = to_string(numeros);
		for (int i = 0; i < entero.length(); i++)
		{
			if (isdigit(entero[i]) == 0)
				return false;
		}
		return true;
	}
}