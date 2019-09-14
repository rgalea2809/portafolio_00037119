#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

float mediana(int *arreglo, int size) {
	int mitad = 0;

	mitad = (size / 2);

	if (size % 2 == 0) {

		int limite1 = 0, limite2 = 0;
		float l1 = 0, l2 = 0;

		limite1 = (mitad - 0.50);
		limite2 = (limite1 + 1);

		l1 = *(arreglo + limite1);
		l2 = *(arreglo + limite2);

		return ((l1 + l2) / 2);

			

	}
	else if (size % 2 != 0) {
		int numero = 0;
			numero = ((mitad - 0.5))+1;
		return *(arreglo +numero);

		
	}

}


int main() {

	int tamano = 0, n=0;

	float medianaArray=0;

	cout << "\nCALCULADORA DE MEDIANA DE UN ARREGLO:\n\nDE CUANTOS NUMEROS ES EL ARREGLO? " << endl;
	cin >> tamano;

	int arreglo[1000];

	cout << "\nIngrese los numeros del arreglo" << endl;

	for (int i = 0; i <= tamano-1; i++) {
		
		cout << "Ingrese el numero " << i+1 << " del arreglo: ";
		cin>> arreglo[i];
		cout << "\n";
	}

	medianaArray= mediana(arreglo, tamano);

	cout << "\n LA MEDIANA ES: " << medianaArray;

	return 0;
}