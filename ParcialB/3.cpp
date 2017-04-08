/*
 * Autor: Luis Albaran, Sebastian Delgado
 * Archivo: 3
 * Descripción: Punto 3 del parcial B
 * Fecha de creación: 5 de abril
 * Fecha de modificación: 5 de abril
*/

#include <iostream>

using namespace std;

   int funcion(int a, int b, int c){
	
	if (a > 0 && b > 0){
		return 2*c;
	   }
	  
	  if (a < 0){
		  if (b > 5 || b > -5){
			  return 3*c;
			  }
	      if (a <= 5 && b > 5) {
			  return 5*c;
			  }
		     else {return 4*c;
		           }   
		  }
		  
		    else { if (b = 0 && a > 0) {
			   return 5*c;
		   }
		   
		   else { return c;
		   }
	   }
   }
int main () {
	
	int a, b, c;
	
	cout <<"Ingrese el valor de a"<<endl;
	cin >> a;
	
	cout <<"Ingrese el valor de b"<<endl;
	cin >> b;
	
	cout <<"Ingrese el valor de c"<<endl;
	cin >> c;
	
	funcion (a,b, c);
	
	cout << "La respuesta es " ;
	cout << funcion (a,b,c)<< endl;

}
	

