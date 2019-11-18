#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
	int dato;
	Nodo* sig;
};

struct arbol {
	int dato;
	arbol* izq;
	arbol* der;
};

class ListaEnlazada
{
private:
	Nodo* inicio;

public:
	Nodo* nodoNuevo(int valor)
	{
		Nodo* n = new Nodo;
		n->dato = valor;
		n->sig = NULL;
		return n;
	}

	void insertar(int valor)
	{
		Nodo* n = nodoNuevo(valor), * temp = inicio;
		if (!inicio)
		{
			inicio = n;
		}
		else
		{
			while (temp)
			{
				if (temp->sig == NULL)
				{
					temp->sig = n;
					temp = NULL;
				}
				else
				{
					temp = temp->sig;
				}
			}
		}
	}

	Nodo* BuscarBorrar(int valor)
	{
		Nodo* temp = inicio;
		if (!inicio)
		{
			return NULL;
		}
		else
		{
			while (temp)
			{
				if (temp->sig != NULL)
				{
					if (temp->sig->dato != valor)
					{
						temp = temp->sig;
					}
					else
					{
						return temp;
					}
				}
				else
				{
					return NULL;
				}
			}
		}
	}
	void DeleteNode(int valor)
	{
		Nodo* temp = BuscarBorrar(valor), * aux;
		if (temp != NULL)
		{
			if (temp->sig->sig != NULL)
			{
				aux = temp->sig;
				temp = temp->sig->sig;
				delete(aux);
				temp->sig = NULL;
			}
			else
			{
				aux = temp->sig;
				delete(aux);
				temp->sig = NULL;

			}
		}
		else
		{
			cout << "La lista esta vacia";
		}
	}
	void ShowList()
	{
		Nodo* temp = inicio;
		if (!inicio)
		{
			cout << "La lista no tiene elementos";
		}
		else
		{
			while (temp)
			{
				cout << temp->dato << ", ";
				temp = temp->sig;
			}
		}
	}
	ListaEnlazada()
	{
		inicio = NULL;
	}
	arbol* crearArbol(int numero) {
		arbol* nuevo = new arbol;
		nuevo->dato = numero;
		nuevo->izq = NULL;
		nuevo->der = NULL;

		return nuevo;
	}

	void AddNode(arbol** Inicio, int numero) {
		if (!*Inicio) {
			*Inicio = crearArbol(numero);
		}
		else {
			//insertar a la izquierda
			if (numero < (*(*Inicio)).dato) {
				AddNode(&(*(*Inicio)).izq, numero);
			}
			//insertar a la derecha
			else {
				AddNode(&(*(*Inicio)).der, numero);
			}
		}
	}
	void mostrarArbol(arbol* arbol) {
		if (!arbol) {
			return;
		}
		else {
			mostrarArbol(arbol->izq);
			mostrarArbol(arbol->der);
		}
	}
};

void mostrarPO(arbol* a) {
	if (a == NULL) {
		return;
	}
	else {
		cout << a->dato << endl;
		mostrarPO(a->izq);
		mostrarPO(a->der);
	}

}

int main()
{
	arbol* pInicio = NULL;
	ListaEnlazada lista;
	lista.insertar(5);
	lista.insertar(8);
	lista.insertar(10);
	lista.insertar(2);

	lista.ShowList();
	system("pause");
	lista.AddNode(&pInicio, 5);
	lista.AddNode(&pInicio, 8);
	lista.AddNode(&pInicio, 10);
	lista.AddNode(&pInicio, 2);
	mostrarPO(pInicio);

	system("pause");
	lista.DeleteNode(5);
	lista.DeleteNode(8);
	lista.DeleteNode(10);
	lista.DeleteNode(2);

	lista.ShowList();

}
