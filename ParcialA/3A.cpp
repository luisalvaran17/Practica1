#include <iostream>

using namespace std;

	char funcion1 (int &a, int &b){
		
	 if (b > 0 and a > 0){
		 return 'c';
		 }
		 
	 if (b < 0){
		 
		if (a > 5 and b < -5){
			 return 'd';
			 }
			 
			if (a <= 5 and b > 5){
			 return 'f';
			 }
			 
				else {
					return 'k';
			 }
		}
		
		if (b == 0 and a > 0){
			return 'u';
			} 
			
			else {
				return 'v';
				}
		}

int main(){
	
	 int x, y;
	 
	 cout << "ingrese el valor de A" << endl; cin >> x;
	 cout << "ingrese el valor de B" << endl; cin >> y;
		
	 funcion1(x,y);
	 cout << funcion1(x,y) << endl;
		
} 
