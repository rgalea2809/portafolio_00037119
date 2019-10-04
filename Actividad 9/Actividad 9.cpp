


//ACTIVIDAD 9 RODRIGO ERNESTO MEJIA GALEA 00037119

#include <iostream>
#include <string>

using namespace std;

struct nodo {
	float elemento;
	struct nodo* siguiente;

};
typedef struct nodo Pila;

void inicializar(Pila* s) {
	*s = NULL;
}

bool empty(Pila* s) {
	return *s == NULL;
}

void push(Pila* p, float e) {
	struct nodo* unNodo;
	unNodo = (struct nodo*)malloc(sizeof(struct nodo));
	unNodo->elemento = e;
	unNodo->siguiente = *s;

	*s = unNodo;
	cout << "Nueva direccion: " << *s << endl;
}

float pop(Pila* s) {
	if (!empty(s)) {
		struct nodo* unNodo = *s;
		float e = (*s)->elemento;
		*s = (*s)->siguiente;
		delete(unNodo);
		cout << "Nueva direccion: " << *s << endl;
		return e;
	}
	else {
		cout << "Underflow!" << endl;
		return -1;
	}
}

float stacktop(Pila* p) {
	if (!empty(s)) {
		float e = (*s)->elemento;
		return e;
	}
	else {
		cout << "Underflow!" << endl;
		return -1;
	}
}


float QuitarEliminando(Pila *p) {
	float d1 = 0.0;
	float a = 0, b = 0, c = 0, d = 0;
	

	if (empty(p)) {
		return -1; //VACIA
	}
	a= pop(p);
	if (empty(p)) {
		return -1; //VACIA, SOLO TIENE 1 VALOR
	}

	while (!empty(p)) {
		d1 = pop(p);
	}
	return d1;
	

}

float QuitarIntacto(Pila* p) {
	float d2 = 0.0;
	float a = 0, b = 0, c = 0, d = 0;


	if (empty(p)) {
		return -1; //VACIA
	}
	a = pop(p);
	if (empty(p)) {
		return -1; //VACIA, SOLO TIENE 1 VALOR
	}

	a = pop(p);
	b = pop(p);
	c = pop(p);
	d = pop(p);
	d2 = d;
	push(p, d);
	push(p, c);
	push(p, b);
	push(p, a);

	return d2;


}


int main() {
	Pila Pila1;
	Pila Pila2;
	inicializar(&Pila1);

	if (empty(&Pila1)) {
		cout << "Inicializada una Pila vacia.";
	}



	//Agregar los datos a la pila
	push(&Pila1, 34);
	push(&Pila1, 2.4);
	push(&Pila1, 76);
	push(&Pila1, 21);

	//Quitar datos dejando la pila vacia

	float d1 = 0;

	d1 = QuitarEliminando(&Pila1);


	//Agregar los datos a la pila por segunda vez
	push(&Pila1, 34);
	push(&Pila1, 2.4);
	push(&Pila1, 76);
	push(&Pila1, 21);

	//dejar pila intacta
	float d2 = 0;

	d2 = QuitarIntacto(&Pila1);








	return 0;
}