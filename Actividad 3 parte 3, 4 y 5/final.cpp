#include <iostream>
#include <time.h>
#include <string>
using namespace std;

struct continente1 {
	string pais = "asdd";
	string capital= "asd";
	int CantHabit=0;
	int MediaHabit;
}cont1[5], *p_cont1 = cont1;

struct continente2 {
	string pais;
	string capital;
	int CantHabit;
	int MediaHabit=0;
}cont2[5], *p_cont2 = cont2;

struct continente3 {
	string pais;
	string capital;
	int CantHabit=0;
	int MediaHabit;
}cont3[5], * p_cont3 = cont3;

struct continente4 {
	string pais;
	string capital;
	int CantHabit=0;
	int MediaHabit;
}cont4[5], * p_cont4 = cont4;

struct continente5 {
	string pais;
	string capital;
	int CantHabit=0;
	int MediaHabit;
}cont5[5], * p_cont5 = cont5;

void IngresarDatos();

void IngresarDatos() {

	cout << "\nIngrese los paises del primer continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "\nIngrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont1 + i)->pais;

		cout << "Ingrese su Capital: ";
		cin >> (p_cont1 + i)->capital;
		

		cout << "Ingrese la cantidad de habitantes: ";
		cin >> (p_cont1 + i)->CantHabit;
	}
	
	cout << "\nIngrese los paises del segundo continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "\n\nIngrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont2 + i)->pais;

		cout << "Ingrese su Capital: ";
		cin >> (p_cont2 + i)->capital;
		
		cout << "Ingrese la cantidad de habitantes: ";
		cin >> (p_cont2 + i)->CantHabit;

		if (i == 0) {
			(p_cont2)->CantHabit -= ((p_cont1)->CantHabit);
		}
	}

	cout << "\nIngrese los paises del tercer continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "\n\nIngrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont3 + i)->pais;

		cout << "Ingrese su Capital: ";
		cin >> (p_cont3 + i)->capital;

		cout << "Ingrese la cantidad de habitantes: ";
		cin >> (p_cont3 + i)->CantHabit;

		if (i == 0) {
			(p_cont3)->CantHabit -= ((p_cont2)->CantHabit);
		}
	}

	cout << "\nIngrese los paises del cuarto continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "\n\nIngrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont4 + i)->pais;

		cout << "Ingrese su Capital: ";
		cin >> (p_cont4 + i)->capital;

		cout << "Ingrese la cantidad de habitantes: ";
		cin >> (p_cont4 + i)->CantHabit;

		if (i == 0) {
			(p_cont4)->CantHabit -= ((p_cont3)->CantHabit);
		}
	}

	cout << "\nIngrese los paises del quinto continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "\n\nIngrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont5 + i)->pais;

		cout << "Ingrese su Capital: ";
		cin >> (p_cont5 + i)->capital;

		cout << "Ingrese la cantidad de habitantes: ";
		cin >> (p_cont5 + i)->CantHabit;

		if (i == 0) {
			(p_cont5)->CantHabit -= ((p_cont4)->CantHabit);
		}
	}
	
	
}



void ImprimirHabitantesxCont(int c1, int c2, int c3, int c4, int c5) {
	cout << "\nPoblacion de continentes: " << endl;
	cout << "Continente 1: " << c1 << endl;
	cout << "Continente 2: " << c2 << endl;
	cout << "Continente 3: " << c3 << endl;
	cout << "Continente 4: " << c4 << endl;
	cout << "Continente 5: " << c5 << endl;

	
}

void CapitalMayorPoblacion() {

	int m1 = 0;
	string c1 = "Asd";

	for (int i = 0; i < 5; i++) {
		if ((p_cont1 + i)->CantHabit > m1) {
			m1 = (p_cont1 +i)->CantHabit;
			c1 = (p_cont1 + i)->capital;
		}
	}

	for (int i = 0; i < 5; i++) {
		if ((p_cont2 + i)->CantHabit > m1) {
			m1 = (p_cont2 + i)->CantHabit;
			c1 = (p_cont2 + i)->capital;
		}
	}

	for (int i = 0; i < 5; i++) {
		if ((p_cont3 + i)->CantHabit > m1) {
			m1 = (p_cont3 + i)->CantHabit;
			c1 = (p_cont3 + i)->capital;
		}
	}

	for (int i = 0; i < 5; i++) {
		if ((p_cont4 + i)->CantHabit > m1) {
			m1 = (p_cont4 + i)->CantHabit;
			c1 = (p_cont4 + i)->capital;
		}
	}

	for (int i = 0; i < 5; i++) {
		if ((p_cont5 + i)->CantHabit > m1) {
			m1 = (p_cont5 + i)->CantHabit;
			c1 = (p_cont5 + i)->capital;
		}
	}

	cout << "\nLa Capital con mayor poblacion es: " << c1 << endl;
	cout << "Posee " << m1 << " Habitantes";




}




int main()
{

	IngresarDatos();


	int pc1 = 0;
	pc1 = ((p_cont1)->CantHabit) + ((p_cont1 + 1)->CantHabit) + ((p_cont1 + 2)->CantHabit) + ((p_cont1 + 3)->CantHabit) + ((p_cont1 + 4)->CantHabit) + ((p_cont1 + 5)->CantHabit);

	int pc2 = 0;
	pc2 = ((p_cont2)->CantHabit) + ((p_cont2 + 1)->CantHabit) + ((p_cont2 + 2)->CantHabit) + ((p_cont2 + 3)->CantHabit) + ((p_cont2 + 4)->CantHabit) + ((p_cont2 + 5)->CantHabit);
	
	int pc3 = 0;
	pc3 = ((p_cont3)->CantHabit) + ((p_cont3 + 1)->CantHabit) + ((p_cont3 + 2)->CantHabit) + ((p_cont3 + 3)->CantHabit) + ((p_cont3 + 4)->CantHabit) + ((p_cont3 + 5)->CantHabit);
	
	int pc4 = 0;
	pc4 = ((p_cont4)->CantHabit) + ((p_cont4 + 1)->CantHabit) + ((p_cont4 + 2)->CantHabit) + ((p_cont4 + 3)->CantHabit) + ((p_cont4 + 4)->CantHabit) + ((p_cont4 + 5)->CantHabit);
	
	int pc5 = 0;
	pc5 = ((p_cont5)->CantHabit) + ((p_cont5 + 1)->CantHabit) + ((p_cont5 + 2)->CantHabit) + ((p_cont5 + 3)->CantHabit) + ((p_cont5 + 4)->CantHabit) + ((p_cont5 + 5)->CantHabit);
	

	ImprimirHabitantesxCont(pc1, pc2, pc3, pc4, pc5);

	

	CapitalMayorPoblacion();













	return 0;
}