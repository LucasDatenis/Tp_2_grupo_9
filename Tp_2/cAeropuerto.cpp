#include <iostream>
#include <string>

using namespace std;

class Aeropuerto
{
private:
	string nombre;
	const unsigned int id;
public:
	Aeropuerto(string nombre, const unsigned int id);
	~Aeropuerto();
};