#include <iostream>
#include <string>
#include <time.h>
#include <stack>

using namespace std;

//CREACION DE PILA PRINCIPAL
stack<int> s;
//PILA AUXILIAR
stack<int> b;
//PILA PAR
stack<int>c;
//PILA IMPARES
stack<int>d;

//Lee los elementos del stack principal para comprobrar que no haya elementos repetidos en la pila
void leerstack(int r) {

	if (r % 2 == 0) {
		c.push(r);
	}
	else {
		d.push(r);
	}



}


//Genera un random, el cual luego es metido a la pila, hasta tener n cantidad
//de elementos en la pila
void random(int n) {
	int aux = 0;

	while (aux < n) {

		int random = rand() % 100 + 1;

			s.push(random);

			//Lee el random para meterlo a la pila par o impar
			leerstack(random);
			aux++;
	

	}

}

void LeerContrario(int n, int aux) {
	int d = 0;
	d= n - 1;

	int c = aux;
	c--;

	if (s.empty() == false) {

		int aux2 = s.top();

		s.pop();

		if (n != 0) {
			LeerContrario(d, c);
		}

		cout << c + 1 << ". " << aux2 << endl;
	}


}


int main() {

	int n;
	cout << "Ingrese la cantidad de numeros a almacenar en la pila: ";
	cin >> n;

	random(n);

	cout << "\nLOS VALORES SON: " << endl;
	int i = 0;
	while (s.empty() == false) {
		int aux3 = s.top();
		cout << i + 1 << ". " << aux3 << endl;
		b.push(aux3);
		s.pop();
		i++;
	}
	//VOLVER A METER VALORES A STACK PRINCIPAL
	int o = 0;
	while (b.empty() == false) {
		int aux3 = b.top();
		s.push(aux3);
		b.pop();
		o++;
	}


	cout << "\nLOS VALORES PARES SON: " << endl;
	int j = 0;
	while (c.empty() == false) {
		int aux3 = c.top();
		cout << j + 1 << ". " << aux3 << endl;
		c.pop();
		j++;
	}

	cout << "\nLOS VALORES IMPARES SON: " << endl;
	int k = 0;
	while (d.empty() == false) {
		int aux3 = d.top();
		cout << k + 1 << ". " << aux3 << endl;
		d.pop();
		k++;
	}

	int aux = n;
	cout << "\nLOS VALORES EN SENTIDO CONTRARIO SON:" << endl;
	LeerContrario(n, aux);




	return 0;
}