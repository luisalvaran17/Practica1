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

 void vender (int producto, int empleado, int totalVenta, map <int,double> historialVenta ){
	 
	 for (map <int,double> ::iterator it = historialVenta.begin (); it!= historialVenta.end (); ++ it) {
		 if ((it -> first) == empleado){
			 if ((it -> first) == producto){
				 historialVenta[empleado] = totalVenta;
			 }
		 }
	 }
		 historialVenta[empleado,producto] = totalVenta;
	 }
	
	 int main () {
	  int producto;
	  int empleado;
	  int totalVenta;
	 
	  cout <<"ingrese el codigo del producto"<<endl;
	  cin >> producto;
	  
	  cout <<"ingrese el empleado"<<endl;
	  cin >> empleado;
	  
	  cout <<"ingrese el total de la venta" <<endl;
	  cin >> totalVenta;
	  
	  map <int,double> historialVenta;
	  historialVenta [1234, 25] = 2650 ;
	  
	  
	 vender (producto, empleado, totalVenta, historialVenta);
  }
	 
