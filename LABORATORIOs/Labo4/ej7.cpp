#include <iostream>
#include <string>

using namespace std;

struct Tdato {
	int numero;
};
typedef struct Tdato Dato;

struct Tnodo {
	Dato dato;
	struct Tnodo* siguiente;
};
typedef struct Tnodo Nodo;
Nodo* pInicio;

Dato SolNumero() {
	Dato t;
	cout << "Que numero ingresara? ";
	cin >> t.numero;

	return t;

}

void AgregarInicio(Dato t) {
	Nodo* nuevo = new Nodo;
	nuevo->dato = t;
	nuevo->siguiente = pInicio;
	pInicio = nuevo;
}

void AgregarFinal(Dato t) {
	Nodo* nuevo = new Nodo;
	nuevo->dato = t;
	nuevo->siguiente = NULL;

	if (pInicio == NULL) {
		pInicio = nuevo;
	}
	else {
		Nodo* p = pInicio;
		Nodo* q = NULL;
		while (p != NULL) {
			q = p;
			p = p->siguiente;
		}
		q->siguiente = nuevo;
	}
}

void AgregarDespues(Dato t) {
	int n = 0;
	cout << "Luego de que numero desea agregarlo? ";
	cin >> n;

	Nodo* s = pInicio;

	while (s != NULL && (s->dato).numero != n){
		s = s->siguiente;
		if (s == NULL) {
		cout << "Numero de referencia NO existe" << endl;
		return;
		}
	}

	Nodo* nuevo = new Nodo;
	nuevo->dato = t;
	nuevo->siguiente = s->siguiente;

	s->siguiente = nuevo;
	cout << "Dato agregado!\n";
}

void AgregarAntes(Dato t) {

	int n = 0;
	cout << "Antes de que numero desea agregarlo? ";
	cin >> n;

	Nodo* s = pInicio, * q = NULL;

	while (s != NULL && (s->dato).numero != n) {
		q = s;
		s = s->siguiente;
		if (s == NULL) {
			cout << "Numero de referencia NO existe" << endl;
			return;
		}
	}

	Nodo* nuevo = new Nodo;
	nuevo->dato = t;
	nuevo->siguiente = s;

	if (q == NULL) {
		pInicio = nuevo;
	}
	else {
		q->siguiente = nuevo;
	}
	cout << "Dato agregado!\n";
}


void Llenar() {
	Dato p;
	p = SolNumero();

	int op=0;
	cout << "\nDonde lo desea agregar?\n1- Al inicio\n2-Al final\n3- despues de cierto valor.\n4- antes de cierto valor.";
	cin >> op;
	bool cont = true;

		switch (op) {
		case 1: cout << "\nAgregando al Inicio: \n";
			AgregarInicio(p);
			cont = false;
			break;
		case 2: cout << "\n Agregando al final: \n";
			AgregarFinal(p);
			cont = false;
			break;
		case 3: cout << "\nAgregando despues de cierto dato: \n";
			AgregarDespues(p);
			cont = false;
			break;
		case 4: cout << "\nAgregando antes de cierto valor: \n";
			AgregarAntes(p);
		default:
			break;
		}
		
}

void eliminarElemento() {
	int n = 0;
	int cont = 0;
	cout << "Que numero desea eliminar? ";
	cin >> n;


	Nodo* p = pInicio, * q = NULL;
	while (p != NULL && (p->dato).numero != n) {
		q = p;
		p = p->siguiente;
	}
	if (p == NULL) {
		cout << "numero a borrar NO existe" << endl;
		return;
	}
	if (q == NULL)
		pInicio = p->siguiente;
	else
		q->siguiente = p->siguiente;
	delete(p);
	cout << "numero borrado!" << endl;
}



void MostrarTodos() {
	Nodo* s = pInicio, * q = NULL;

	int cont = 0;
	while (s != NULL) {
		cont++;
		q = s;
		s = s->siguiente;

		cout << cont << ") " << (q->dato).numero << "." << endl;
	}


}


int main() {


	bool continuar = true;
	int opcion = 0;

	do {
	cout << "OPCIONES: \n";
	cout << "\n1- Agregar numeros.";
	cout << "\n2- Eliminar cierto numero de todos los elementos.";
	cout << "\n3- Mostrar todos los elementos. ";
	cout << "\n4- SALIR.\n";
	cin >> opcion;

	
		switch (opcion) {
		case 1: cout << "\nAgregando elementos...\n";
			Llenar();
			break;
		case 2:cout << "\nEliminando cierto elemento del conjunto...\n";
			eliminarElemento();
			break;
		case 3: cout << "\nImprimiendo todos los elementos...\n";
			MostrarTodos();
			break;
		case 4: continuar = false;
		default:
			break;
		}
	} while (continuar);






	return 0;
}