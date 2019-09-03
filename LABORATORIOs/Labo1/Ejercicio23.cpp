#include <iostream>
#include <string>

using namespace std;

struct Complejo {
	int real;
	int imaginario;
}NumComp[2], *p=NumComp;

void sumar(int R1, int R2, int I1, int I2, int *R3, int *I3) {

	*R3 = R1 + R2;
	*I3 = I1 + I2;

}

int main() {

	cout << "SUMA DE ENTEROS\n\nIngrese la parte real del primer numero complejo: ";
	cin >> p->real;

	cout << "\nIngrese la parte imaginaria: ";
	cin >> p->imaginario;
	
	cout << "\n\nIngrese la parte real de su segundo numero complejo: ";
	cin >> (p + 1)->real;

	cout << "\nIngrese la parte imaginaria: ";
	cin >> (p + 1)->imaginario;

	cout << "\n\nSU PRIMER NUMERO COMPLEJO ES: " << p->real << " + " << p->imaginario << " i." << endl;
	cout << "SU SEGUNDO NUMERO COMPLEJO ES: " << (p + 1)->real << " + " << (p + 1)->imaginario << " i." << endl;

	int Rnuevo = 0, Inuevo = 0;

	sumar(p->real, (p + 1)->real, p->imaginario, (p + 1)->imaginario, &Rnuevo, &Inuevo);

	cout << "\n\nLa suma de sus enteros devuelve: " << Rnuevo << " + " << Inuevo << " i." << endl;




	return  0;
}