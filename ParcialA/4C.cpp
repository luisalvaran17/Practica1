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

   void venta (int producto, int cantidad, map <int,double> inventario, map <int,double> historialVentas ){
	   
	   for(map <int,double> ::iterator it=inventario.begin(); it!= inventario.end(); ++ it){
		
			if (((it -> first) == producto) and ((it -> first) > cantidad)){
				historialVentas [producto] = cantidad;
				inventario [producto] -= cantidad;
			}
				else "error";
			}
		}
		
	int main () {
		
		int producto, cantidad;
		
		cout << "Ingrese el codigo del producto" <<endl;
		cin >> producto;
		
		cout << "Ingrese la cantidad a vender" <<endl;
		cin >> cantidad;
		
		map <int,double> inventario;
		inventario [230] = 29;
		
		map <int,double> historialVentas;
		historialVentas [producto] = 0;
		
		venta (producto, cantidad, inventario, historialVentas);
	}
						
