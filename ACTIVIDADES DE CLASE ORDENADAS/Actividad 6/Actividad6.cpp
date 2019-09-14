//RODRIGO ERNESTO MEJIA GALEA 00037119

#include <iostream>
#include <string>

using namespace std;

int arreglo[8]{ 1, 3, 4, 5, 17, 18, 31, 33};


int buscar(int n, int l, int h, int m) {

	if (l > h) {
		return -1;
	}
	m = (l + h) / 2;

	if (n == arreglo[m]) {
		return m;
	}
	if (n < arreglo[m]) {
		buscar(n, l, m, m);
	}
	else {
		buscar(n, m + 1, h, m);
	}
}


int main() {
	int numero = 0;

	cout << "Ingrese el numero que desea buscar en el arreglo: ";
	cin >> numero;
	
	int size = 8;
	int low = 0;
	int high = size - 1;
	int medio = 0;


	int i= buscar(numero, low, high, medio);

	if (i == -1) {
		cout << "\nEL NUMERO NO EXISTE EN EL ARREGLO\n";
	}
	else {
		cout << "\nEl elemento se encuentra en la casilla: ARREGLO[" << i <<"]. (CASILLA "<<i+1 <<")"<< endl;
	}



}