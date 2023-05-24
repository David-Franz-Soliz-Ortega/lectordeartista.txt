#include <iostream>
#include <list>
#include "artista.cpp"
#include "cancion.cpp"
#include "artistamanejadordatos.cpp"
using namespace std;


class artistamanejadordatosestaticos: public artistamanejadordatos 
{
public:
	list<artista> cargar()
	{
		list<artista> listaartistas;
		artista a1;
		artista a2;
		artista a3;
		artista a4;
		artista a5;
		artista a6;
		
		listaartistas.push_back(a1);
		listaartistas.push_back(a2);
		listaartistas.push_back(a3);
		listaartistas.push_back(a4);
		listaartistas.push_back(a5);
		listaartistas.push_back(a6);
		return listaartistas;
	}
	void guardar(artista artist)
	{
		
	}
};
