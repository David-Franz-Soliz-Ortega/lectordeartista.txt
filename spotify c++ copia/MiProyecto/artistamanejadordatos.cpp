#include <iostream>
#include <list>
#include "artista.cpp"
using namespace std;

class artistamanejadordatos
{
public:
	virtual list<artista> cargar() = 0;
	virtual void guardar(artista artist) = 0;
};

