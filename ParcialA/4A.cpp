/*
 * Autor: Luis Albaran, Sebastian Delgado
 * Archivo: 3A
 * Descripción: Punto 3 del Parcial_A
 * Fecha de creación: 05 abril 2017
 * Fecha de modificación: 05 abril 2017
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

	// Punto A

	void agregarProducto (string producto, int cantidad, map<string,double> inventario){
		
		for(map <string,double> ::iterator it=inventario.begin(); it!= inventario.end(); ++ it){
		
			if ((it -> first) == producto){
				
				 inventario [producto] += cantidad;
				// cout << cantidad << endl;
				
				}
			}
			
			inventario [producto] = cantidad;
		}
		
	/*	// Punto B
		void venta (string venta, int cantidad, map<string,double> inventario2, map<string,double> historial){
			
				for(map <string,double> ::iterator it=inventario2.begin(); it!= inventario2.end(); ++ it){
					for(map <string,double> ::iterator it=historial.begin(); it!= historial.end(); ++ it){
						
						if (((it -> first) == producto) and (cantidad > 0)){
							
							inventario []
							
							}
			
			
			
			
			
			}*/

int main (){

	int  cantidad;
	string producto;
	
	cout << "ingrese el producto: " << endl; cin >> producto;
	cout << "ingrese la cantidad: " << endl; cin >> cantidad;
	
	map <string, double> inventario;
	
	inventario ["manzana"] = 2;
	inventario ["pera"] = 4;
	inventario ["banano"] = 6;
	
	agregarProducto(producto, cantidad, inventario);

}
