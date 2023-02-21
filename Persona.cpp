/*universidad mariano galvvez de guatemala
 ingenierpia en sistemas y ciencias de la informacion 
 karen marleny tejaxun pucc 1290-22-13292
 programacion 1
*/
#include <iostream>
using namespace std;
class Persona{
	//atributos 
	protected : string nombres,apellidos,direccion;
            	int telefono;
	
	//constructor 
	protected : 
	           Persona(){
			   }
	           Persona(string nom,string ape,string dir,int tel){ 
	                nombres = nom;
	                apellidos = ape;
	                direccion = dir;
	                telefono = tel;
			   }  
			   
	//metodo
	void mostrar();
};
