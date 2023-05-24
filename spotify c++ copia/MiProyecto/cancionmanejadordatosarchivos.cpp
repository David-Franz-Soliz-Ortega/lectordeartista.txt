#include <iostream>
#include <list>
#include <fstream>
#include "cancionmanejadordatos.cpp"
using namespace std;
#include <sstream>
#include <string>

////class cancionmanejadordatosarchivos:public cancionmanejadordatos{
//public:
//	cancionmanejadordatosarchivos(){
//		cout<<"Creando una subclase"<<endl;
////	}
	
//	list<cancion> cargar(){
//		list<cancion> listacancion;
//		ifstream cin3("cancion.txt");
//		string titulo;
//		int minutos,segundos;
//		int nro=1;
//		while(cin3.peek()!=EOF){
//			getline(cin3,titulo,',');
//			getline(cin3,minutos,',');
//			getline(cin3,segundos,',');
//			if(minutos>10){
//				cout<<"Nro "<<nro<<".- "<<titulo<<" "<<minutos;
//			}
//			else{
//				cout<<"Nro "<<nro<<".- "<<titulo<<" 0"<<minutos;
//			}
//			if(segundos>10){
//				cout<<":"segundos<<endl;
//			}
//			else{
//				cout<<":0"<<segundos<<endl;
//			}
//			nro=nro+1;
//		}
//		return listacancion;
//	}
//		
//	void guardar(cancion cancioncita){
//		ofstream cout3;
//		cout3.open("cancion.txt",ios_base::app);
//		stringstream ss;
//		ss<<cancioncita.gettitulo()<<","<<cancioncita.getminutos()<<","<<cancioncita.getsegundos();
//		string s=ss.str();
//		cout3<<a;
//	}
////};
