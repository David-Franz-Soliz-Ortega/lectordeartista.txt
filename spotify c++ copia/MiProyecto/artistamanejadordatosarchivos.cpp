#include <iostream>
#include <list>
#include <fstream>
 #include "artista.cpp"
#include "artistamanejadordatos.cpp"
#include "cancion.cpp"
using namespace std;
#include <sstream>
#include <string>

class artistamanejadordatosarchivos:public artistamanejadordatos{
public:
	artistamanejadordatosarchivos(){
		cout<<"Creating subclass type"<<endl;
	}
	list<artista> cargar(){
		list<artista> listartista;
		ifstream cin2("artista.txt");
		string nombre,procedencia,genero;
		int nro=1;
		while(cin2.peek() != EOF){
			getline(cin2,nombre,',');
			getline(cin2,procedencia,',');
			getline(cin2,genero);
			cout<<"Nro "<< nro<< ".-  " <<nombre <<" "<< procedencia << " "<< genero <<endl;
			nro=nro+1;
		}
		return listartista;
	}
		
	void guardar(artista artist){
		ofstream cout2;
		cout2.open("artista.txt",ios_base::app);
		stringstream  ss;
		ss<<artist.getnombre()<<","<<artist.getprocedencia()<<","<<artist.getgenero();
		string s=ss.str();
		cout2<<s;
	}
};
