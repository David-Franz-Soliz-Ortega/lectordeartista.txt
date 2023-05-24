#include<iostream>
#include<string>
#include "artista.cpp"
using namespace std;
#ifndef GRANDPARENT_H
#define GRANDPARENT_H
struct tiempo{
	int minutos;
	int segundos;
	
};
class cancion:public artista{
private:
	string titulo;
	tiempo duracion;

public:
	cancion():artista(){
		titulo=" ";
		duracion.minutos=0;
		duracion.segundos=0;
	}
	void verinfo(){
		cout<<"Titulo: "<<titulo<<endl;
		if(duracion.minutos>10)
		cout<<"duracion: "<<duracion.minutos; 
		else
			cout<<"duracion: "<<"0"<<duracion.minutos;
		if(duracion.segundos>10)
			cout<<":"<<duracion.segundos<<endl;
		else
			
			cout<<":0"<<duracion.segundos<<endl;
		verinfoartista();
	}
	string gettitulo(){
		return titulo;
	}
		int getminutos(){
			return duracion.minutos;
		}
		int getsegundos(){
			return duracion.segundos;
		}
};
#endif /* GRANDPARENT_H */

