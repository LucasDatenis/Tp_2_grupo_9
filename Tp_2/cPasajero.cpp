#include "cPasajero.h"


//Constructor de los objetos Pasajeros
Pasajero::Pasajero(string _nombre, string _apellido, long int dni, unsigned int _nrovuelo, int equipaje_lista)
{
	bool cont_pal = true, cont_num = true;
	//Hacemos la verificacion de que el nombre y apellido sean correctos
	cont_pal = verifico_letas(_nombre);
	if (cont_pal == false)
	{
		cout << "Nombre invalido" << endl;
		exit(1);
	}
	else
		this->nombre = _nombre;
	cont_pal = verifico_letas(_apellido);
	if (cont_pal == false)
	{
		cout << "Apellido invalido" << endl;
		exit(1);
	}
	else
		this->apellido = _apellido;
	//Verificamos que el DNI sea correcto
	cont_num = verifico_numeros(dni);
	//Si se recibe un false quiere decir que el DNI nop presenta en algun lugar un numero o es negativo
	if (cont_num == false)
	{
		cout << "El DNI no es valido" << endl;
		exit(1);
	}
	else
		this->DNI = dni;

	//Verificamos que el DNI sea correcto
	cont_num = verifico_numeros(_nrovuelo);
	//Si se recibe un false quiere decir que el DNI nop presenta en algun lugar un numero o es negativo
	if (cont_num == false)
	{
		cout << "El numero de vuelo no es valido" << endl;
		exit(1);
	}
	else
		this->nrovuelo = _nrovuelo;


	//Verificamos que el DNI sea correcto
	cont_num = verifico_numeros(equipaje_lista);
	//Si se recibe un false quiere decir que el DNI nop presenta en algun lugar un numero o es negativo
	if (cont_num == false)
	{
		cout << "La cantidad de valijas del pasajero no es un numero entero" << endl;
		exit(1);
	}
	else
		this->equipaje_lista = equipaje_lista;



	equipaje = new float[equipaje_lista];
	for (int i = 0; i < equipaje_lista; i++)
		equipaje[i] = NULL;
	equipaje_actual = 0;
	peso_total = 0;
}
//Destructor de los objetos
Pasajero::~Pasajero()
{
	delete equipaje;
}


bool Pasajero::agregarequipaje(float peso) {
	equipaje_actual++;
	for (int i = 0; i < equipaje_actual; i++)
	{
		if(equipaje[i] == NULL)
			equipaje[i] = peso;
		else
			i++;
		peso_total = peso_total + peso;
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

void Pasajero::imprimir_equipaje()
{
	for (int i = 0; i < equipaje_lista; i++)
	{
		cout << "Equipaje numero: " << i + 1 << endl << "Peso: " << equipaje[i] << endl;
	}
}



//Verificamos que el nonmbre y apellido sean validos
bool Pasajero::verifico_letas(string palabra)
{
	for (int i = 0; i < palabra.length(); i++)
	{
		if (palabra[i] == ' ')
			i++;
		else if (isalpha(palabra[i]) == 0)
			return false;
	}
	return true;
}

//Esta funcion verifica si el DNI es valido
bool Pasajero::verifico_numeros(long int entero)
{
	string numero;
	if (entero < 0)
		return false;
	else if (entero == 0)
		return false;
	else
	{
		numero = to_string(entero);
		for (int i = 0; i < numero.length(); i++)
		{
			if (isdigit(numero[i]) == 0)
				return false;
		}
		return true;
	}
}