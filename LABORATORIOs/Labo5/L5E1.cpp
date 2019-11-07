
//		Rodrigo Ernesto Mejia Galea  00037119

#include <iostream>
#include <stdlib.h>
using namespace std;

int contNod = 0, sumaNod=0;

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

void agregarNodo(Arbol a) {
	//solicitar informacion (numero a agregar)
	int numero = 0;
	cout << "Numero a agregar: ";
	cin >> numero;

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

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a) {
	if (a != NULL) {
		cout << " " << a->info;
		preorden(a->izq);
		preorden(a->der);
	}
}
void inorden(Arbol a) {
	if (a != NULL) {
		inorden(a->izq);
		cout << " " << a->info;
		inorden(a->der);
	}
}
void postorden(Arbol a) {
	if (a != NULL) {
		postorden(a->izq);
		postorden(a->der);
		cout << " " << a->info;
	}
}

//CONTADOR DE NODOS
void preordenContar(Arbol a) {
	if (a != NULL) {
		contNod++;
		//cout << " " << a->info;
		preordenContar(a->izq);
		preordenContar(a->der);
	}
}

//SUMAR NODOS
void preordenSumar(Arbol a) {
	if (a != NULL) {
		sumaNod += (a->info);
		//cout << " " << a->info;
		preordenSumar(a->izq);
		preordenSumar(a->der);
	}
}

void recorrerArbol(Arbol a) {
	cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
	cout << "Recorrido IN orden:"; inorden(a); cout << endl;
	cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}


void izqP(Arbol a, int* n) {
	(*n)++;
	if (a->izq != NULL) {
		izqP(a->izq, n);
	}
}

void derP(Arbol a, int* n) {
	(*n)++;
	if (a->der != NULL) {
		derP(a->der, n);
	}
}


void CalcularNivel(Arbol a) {
	int izq = 0, der = 0;

	if (a->izq != NULL) {
		izqP(a->izq, &izq);
	}

	if (a->der != NULL) {
		derP(a->der, &der);
	}

	if (izq >= der) {
		cout << "La profundidad es: " << izq << endl;
	}
	else {
		cout << "La profundidad es: " << der << endl;
	}


}

void ContarNodos(Arbol a) {
	cout << "\nCONTANDO NODOS...\n";
	

	preordenContar(a);

	cout << "\nEl Arbol contiene " << contNod << " Nodos." << endl;


	contNod = 0;

}

void SumarNodos(Arbol a){
	cout << "\nSUMANDO LOS NODOS...\n";

	preordenSumar(a);

	cout << "\nLa suma de los nodos devuelve: " << sumaNod <<"."<< endl;
	sumaNod = 0;
}


int main() {
	int variable = 0;
	cout << "Inicializando arbol...\nValor contenido en la raiz: ";
	cin >> variable;

	Arbol arbol = crearArbol(variable);

	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
			<< "\n\t3) Calcular Cantidad de Niveles\n\t4) Contar Nodos\n\t5) Suma de Valores de Nodos\n\t6) Salir\n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: agregarNodo(arbol);
			break;
		case 2: recorrerArbol(arbol);
			break;
		case 3: CalcularNivel(arbol);
			break;
		case 4:ContarNodos(arbol);
			break;
		case 5:
			SumarNodos(arbol);
			break;
		case 6:continuar = false;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);

	return 0;
}