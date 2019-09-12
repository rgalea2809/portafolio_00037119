#include <iostream>
#include <string>

using namespace std;

struct Pila1 {
	float elementos[100];
	int top;

};
typedef struct Pila1 Pila;

void inicializar(Pila* p) {
	p->top = -1;
}

bool empty(Pila* p) {
	return p->top < 0;
}

void push(Pila* p, float n) {
	if (p->top < 99) {
		(p->top)++;
		p->elementos[p->top] = n;
	}
}

float pop(Pila* p) {
	if (p->top >= 0) {
		(p->top)--;

		return p->elementos[p->top +1];
		
	}
}

float stacktop(Pila* p) {
	if(p->top >= 0) {
		(p->top)--;

		return p->elementos[p->top + 1];

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