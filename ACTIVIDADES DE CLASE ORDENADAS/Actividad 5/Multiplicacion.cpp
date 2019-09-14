//Rodrigo Ernesto Mejia Galea  #00037119  [0219PED]

#include <iostream>
using namespace std;

int multiplicacion(int a, int b) {

	if (b == 1) {
		cout << "b= " << b << " caso base." << endl;
		return a;
	}
	else {

		int B = b - 1;
		multiplicacion(a, B);
		cout << "a=" << a << " b=" << b<< endl;

		return (a+a*(b - 1));
		
	}


}

int main()
{

	int Multiplicando = 0, Multiplicador = 0, resultado = 0;

	cout << "Ingrese el multiplicando: ";
	cin >> Multiplicando;

	cout << "\nIngrese el multiplicador: ";
	cin >> Multiplicador;

	resultado = multiplicacion(Multiplicando, Multiplicador);

	cout << "\nResultado: " << resultado;


	return 0;
}