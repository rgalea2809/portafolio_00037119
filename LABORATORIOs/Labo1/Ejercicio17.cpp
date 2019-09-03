#include <iostream>
#include <string>

using namespace std;

int arreglo[10];


int main() {

		int i = 0;

		while (i < 10) {
			cout << "\nIngrese el entero " << i + 1 << ": ";
			cin >> arreglo[i];

			i++;
		}

		int j = 0;
		int suma = 0;
		while (j < 10) {

			suma = suma + arreglo[j];

			j++;

		}

		int promedio = 0;
		promedio = (suma) / 10;

		cout << "\nSUMA:" << suma << "\nPROMEDIO:" << promedio;



	}