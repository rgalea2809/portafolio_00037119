#include <iostream>
#include <string>

using namespace std;

/*

		LA FUNCION HACE UNA SUMA DE TODOS LOS NUMEROS QUE COMPONEN AL NUMERO INGRESADO, HASTA LLEGAR AL MISMO NUMERO INGRESADO, ES DECIR
		SI INGRESO EL NUMERO 3, LA FUNCION HACE UNA SUMA DE 1 + 2.. + N, HASTA LLEGAR A 3.

int func(int n) {
	if (n == 0)
		return(0);
	return(n + func(n - 1));
}

*/

int FuncIterativa(int n) {

	int suma = 0;
	int digitos = 0;

	if (n == 0) {
		return 0;
	}
	else {
		while (digitos <= n) {
			suma += digitos;
			digitos++;
		}
	}
	return suma;

}

int main() {

	int numero = 0, result = 0;

	cout << "Ingrese el numero: ";
	cin >> numero;	result = FuncIterativa(numero);
	cout << "\n\nRESULTADO: " << result;
}