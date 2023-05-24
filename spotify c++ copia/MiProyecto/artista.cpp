#include<iostream>
#include<string>
using namespace std;

#ifndef GRANDPARENT_H
#define GRANDPARENT_H

enum Genero {Rock,Cumbia,Romatinca,Piano};
	
	class artista{
	private:
		string nombreart;
		string procedencia;
		Genero genero;
	public:
		
		void verinfoartista(){
			cout<<" Artista: "<<nombreart<<endl;
			cout<<" Procedencia: "<<procedencia<<endl;
			cout<<" Genero: "<<genero<<endl;
			cout<<" "<<endl;
		}
			artista(){
				nombreart=" ";
				procedencia=" ";
				genero=Rock;
			}
		string getnombre(){
			return nombreart;
		}
		string getprocedencia(){
			return procedencia;
		}
			
		Genero getgenero(){
			return genero;
		}
			
	
};

#endif /* GRANDPARENT_H */
