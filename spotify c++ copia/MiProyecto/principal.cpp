#include<iostream>
#include<string>
#include<vector>
#include "playlist.cpp"
#include "artistamanejadordatosarchivos.cpp"
using namespace std;


int main(){

artistamanejadordatos *a = new artistamanejadordatosarchivos();
a->cargar();
artista artistita;
a->guardar(artistita);
}
	

	
	
