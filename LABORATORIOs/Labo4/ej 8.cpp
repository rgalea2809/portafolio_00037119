#include <iostream>
#include <string>

using namespace std;

struct Tlista {
	string carnet;
	string nombre;
	string apellido;
	int edad;
	string numero;
	string mail;
};
typedef struct Tlista Lista;

struct Tnodo {
	Lista dato;
	struct Tnodo* sig;
};
typedef struct Tnodo Nodo;
Nodo* pInicio;


Lista SolicitarDatos() {
	Lista t;
	cout << "CARNET: ";
	cin >> t.carnet;
	cout << "\nNOMBRE: ";
	cin >> t.nombre;
	cout << "\nAPELLIDO: ";
	cin >> t.apellido;
	cout << "EDAD: ";
	cin >> t.edad;
	cout << "NUMERO TELEFONICO: ";
	cin >> t.numero;
	cout << "CORREO ELECTRONICO: ";
	cin >> t.mail;

	return t;
}

void insertarInicio(Lista p) {
	Nodo* nuevo = new Nodo;
	nuevo->dato = p;
	nuevo->sig = pInicio;
	pInicio = nuevo;
}


void Llenar() {
	Lista p = SolicitarDatos();
	insertarInicio(p);
}

void mostrarPersona( Lista p) {
	cout << "\nNOMBRE: " << p.apellido << ", " << p.nombre << "." << endl;
	cout << "CARNET: " << p.carnet << "." << endl;
	cout << "EDAD: " << p.edad << "." << endl;
	cout << "E-MAIL: " << p.mail << "." << endl;
	cout << "NUMERO TEL: " << p.numero << "." << endl;
	cout << endl;

}


void Delete() {
	string no;
	cout << "\nIngrese el carnet de la persona que desea eliminar del registro: ";
	cin >> no;

	Nodo* s = pInicio, * q = NULL;

	while (s != NULL && (s->dato).carnet != no) {
		q = s;
		s = s->sig;
	}

	if (s == NULL) {
		cout << "EL CARNET NO PERTENECE A NINGUNA PERSONA INGRESADA";
		return;
	}
	if (q == NULL) {
		pInicio = s->sig;
	}
	else {
		q->sig = s->sig;
	}
	delete(s);
	cout << "\nPersona Eliminada con exito." << endl;

}

void Actualizar() {

	string no;
	cout << "\nIngrese el carnet de la persona cuya informacion desea actualizar: ";
	cin >> no;

	Nodo* s = pInicio, * q = NULL;

	while (s != NULL && (s->dato).carnet != no) {
		q = s;
		s = s->sig;
	}

	if (s == NULL) {
		cout << "Dicho carnet no pertenece a ninguna persona en la base de datos." << endl;
		return;
	}
	
	if ((s->dato).carnet == no) {
		
		Llenar();

	}

	if (q == NULL) {
		pInicio = s->sig;
	}

	else {
		q->sig = s->sig;
	}
	delete(s);

}

void MostrarTodos() {
	Nodo* s = pInicio;

	int cont = 1;
	while (s != NULL) {
		cout << cont++ << ") " << endl;
		mostrarPersona(s->dato);
		s = s->sig;
	}
}


int main(){

	bool continuar = true;
	int opcion;
	do {
		cout << "\nSELECCIONE UNA OPCION:\n";
		cout << "1- Llenar Lista. \n2- Eliminar persona\n3- Actualizar datos de personas.\n4- Mostrar Todas las listas\n5-SALIR" << endl;
		cin >> opcion;

		switch (opcion){
		case 1: cout << "Llenando Lista..." << endl;
			Llenar();
			break;
		case 2: cout << "Eliminando Persona..." << endl;
			Delete();
			break;
		case 3: cout << "Actualizando Datos..." << endl;
			Actualizar();
			break;
		case 4: cout << "Mostrando Listas..." << endl;
			MostrarTodos();
			break;
		case 5: cout<< "Adios!" << endl;
			continuar = false;
			break;
		default:
			break;
		}

	} while (continuar);



	return 0;
}