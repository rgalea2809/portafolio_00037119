#include <iostream>
#include <time.h>
#include <string>
using namespace std;

struct continente1 {
	string pais;
	string capital;
	int CantHabit;
	int MediaHabit;
}cont1[5], *p_cont1= cont1;

struct continente2 {
	string pais;
	string capital;
	int CantHabit;
	int MediaHabit;
}cont2[5], * p_cont2 = cont2;

struct continente3 {
	string pais;
	string capital;
	int CantHabit;
	int MediaHabit;
}cont3[5], * p_cont3 = cont3;

struct continente4 {
	string pais;
	string capital;
	int CantHabit;
	int MediaHabit;
}cont4[5], * p_cont4 = cont4;

struct continente5 {
	string pais;
	string capital;
	int CantHabit;
	int MediaHabit;
}cont5[5], * p_cont5 = cont5;

void IngresarDatos();

void IngresarDatos() {

	cout << "\Ingrese los paises del primer continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont1 + i)->pais;

		cout << "\nIngrese su Capital: ";
		cin >> (p_cont1 + i)->capital;

		cout << "\nIngrese la cantidad de habitantes: ";
		cin >> (p_cont1 + i)->CantHabit;
	}

	cout << "\Ingrese los paises del segundo continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont2 + i)->pais;

		cout << "\nIngrese su Capital: ";
		cin >> (p_cont2 + i)->capital;

		cout << "\nIngrese la cantidad de habitantes: ";
		cin >> (p_cont2 + i)->CantHabit;
	}

	cout << "\Ingrese los paises del tercer continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont3 + i)->pais;

		cout << "\nIngrese su Capital: ";
		cin >> (p_cont3 + i)->capital;

		cout << "\nIngrese la cantidad de habitantes: ";
		cin >> (p_cont3 + i)->CantHabit;
	}

	cout << "\Ingrese los paises del cuarto continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont4 + i)->pais;

		cout << "\nIngrese su Capital: ";
		cin >> (p_cont4 + i)->capital;

		cout << "\nIngrese la cantidad de habitantes: ";
		cin >> (p_cont4 + i)->CantHabit;
	}

	cout << "\Ingrese los paises del quinto continente: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese nombre del pais " << i + 1 << ": ";
		cin >> (p_cont5 + i)->pais;

		cout << "\nIngrese su Capital: ";
		cin >> (p_cont5 + i)->capital;

		cout << "\nIngrese la cantidad de habitantes: ";
		cin >> (p_cont5 + i)->CantHabit;
	}

}



int main()
{

	IngresarDatos();




	


	return 0;
}