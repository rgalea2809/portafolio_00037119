
//		Rodrigo Ernesto Mejia Galea  00037119
//		A veces tarda en compilar, sorry, pero si funciona :(

#include <iostream>
#include <stdlib.h>
using namespace std;


//------ Creacion de nodo y de arbol ------
struct nodo {
	int info;
	struct nodo* izq;
	struct nodo* der;
};
typedef struct nodo Nodo;
typedef struct nodo* Arbol;

Arbol crearArbol(int x) {
	Arbol p = new Nodo;
	p->info = x;
	p->izq = NULL;
	p->der = NULL;
	return p;
}



//--------Creacion de lista------

struct node {
	int dato;
	node* sig;
};

class ListaSimple {

private:
	node* pInicio;

public:
	ListaSimple(void);
	void operaciones(int);
	void insertarInicioLista(int);
	void PromedioLista(void);

};

ListaSimple::ListaSimple(void) {

	pInicio = NULL;

}

void ListaSimple::insertarInicioLista(int dato) {
	node* nuevo;

	nuevo = new node;
	nuevo->dato = dato;
	nuevo->sig = pInicio;
	pInicio = nuevo;
}

void ListaSimple::PromedioLista(void) {
	node* s = pInicio;

	int suma = 0, contador =0;

	cout << "Los elementos de la lista son:" << endl;
	while (s != NULL) {
		cout << s->dato << " ";

		suma += (s->dato);
		contador++;

		s = s->sig;
	}

	cout << "\nEl promedio de los datos es: "<< suma / contador<< ". " << endl;
}


void ListaSimple::operaciones(int x)
{

	int dato = x;

	if (dato == -1) {
		
		PromedioLista();
	}
	else{
	
		insertarInicioLista(dato);
	}
	


}



ListaSimple miLista;


//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato) {
	if (a == NULL)
		cout << "Error: arbol vacio" << endl;
	else if (a->izq != NULL)
		cout << "Error: subarbol IZQ ya existe" << endl;
	else
		a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato) {
	if (a == NULL)
		cout << "Error: arbol vacio" << endl;
	else if (a->der != NULL)
		cout << "Error: subarbol DER ya existe" << endl;
	else
		a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a, int valor) {
	//Define el valor del nodo
	int numero = 0;
	numero = valor;

	Arbol p = a;

	//desplazarse hasta el lugar adecuado
	while (true) {
		if (numero == p->info) {
			cout << "Error: " << numero << " ya existe" << endl;
			return;
		}
		else if (numero < p->info) {//ir a la izquierda
			if (p->izq == NULL)
				break;
			else
				p = p->izq;
		}
		else {//ir a la derecha
			if (p->der == NULL)
				break;
			else
				p = p->der;
		}
	}

	//agregar el nuevo nodo
	if (numero < p->info)
		asignarIzq(p, numero);
	else
		asignarDer(p, numero);
}


void agregarLista(int x) {


	miLista.operaciones(x);

}



void buscarNodo(Arbol a, int x) {

	Arbol p = a;

	//desplazarse por el arbol

	bool buscar = true;
	while (buscar) {
		if (x == p->info) {
			cout << "\nEl valor " << x << " existe en el arbol.\n" << endl;

			agregarLista(x);
			buscar = false;
			return;
		}
		else if (x == -1) {
			agregarLista(x);
			return;
		}
		else if (x < p->info) {//ir a la izquierda
			if (p->izq == NULL)
				break;
			else
				p = p->izq;
		}
		else {//ir a la derecha
			if (p->der == NULL)
				break;
			else
				p = p->der;
		}
	}

	if (buscar == true) {
		cout << "\nEl numero ingresado no existe, pruebe con otro numero.\n" << endl;
		return;
	}

}



int main() {
	//Inicializando Arbol
	Arbol arbol = crearArbol(5);

	agregarNodo(arbol, 1);
	agregarNodo(arbol, 2);
	agregarNodo(arbol, 4);
	agregarNodo(arbol, 6);
	agregarNodo(arbol, 7);
	agregarNodo(arbol, 10);
	agregarNodo(arbol, 11);

	int valor = 0;
	bool fin = true;


	while (valor != -1) {
		cout << "Ingrese el valor que quiere buscar en el arbol: ";
		cin >> valor;


		buscarNodo(arbol, valor);

		if (valor == -1) {
			fin == false;
		}

	}


	return 0;

}