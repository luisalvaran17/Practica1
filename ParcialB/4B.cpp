/*
 * Autor: Luis Albaran, Sebastian Delgado
 * Archivo: 4B
 * Descripción: Punto 4 del parcial B
 * Fecha de creación: 5 de abril
 * Fecha de modificación: 5 de abril
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;
 
 void agregarEmpleado( int empleado, map<int, double> registro){
	 
	 for (map <int,double> ::iterator it = registro.begin (); it!= registro.end (); ++ it) {
	    if ((it -> first) == empleado){
			cout <<"Error"<<endl;
		}
	}
		registro[empleado] = 0;
	}
	    
  int main () {
	  int empleado;
	 
	  
	  cout <<"ingrese el empleado"<<endl;
	  cin >> empleado;
	  map <int,double> registro;
	  registro [1234] = 5;
	  registro [5678] = 675;
	  
	 agregarEmpleado (empleado, registro);
  }
