#include <iostream>
#include <string>

using namespace std;

struct nodo
{
	int dato;
	nodo* sig;
};

struct arbol
{
	int dato;
	arbol* Izq;
	arbol* Der;
};
nodo* pInicio = NULL;
arbol* pArbol = NULL;
void insertTop(int);
void Showlist(void);
void Showlist(nodo*);
void showIn(void);
void showIn(arbol*);
void insNodee(int);
void insNodee(arbol**, int);
void insNodee(int dato) { insNodee(&pArbol, dato); }


void insNodee(arbol** p, int dato)
{
	if (!(*p))
	{
		*p = new arbol;
		(*p)->dato = dato;
		(*p)->Izq = (*p)->Der = NULL;
	}
	else if (dato < (*p)->dato)
	{
		insNodee(&((*p)->Izq), dato);
	}
	else if (dato > (*p)->dato)
	{
		insNodee(&((*p)->Der), dato);
	}
	else cout << "Nodo existente\n";
}


void showIn(void)
{
	showIn(pArbol);
}


void showIn(arbol* p)
{
	if (p != NULL)
	{
		showIn(p->Izq);
		cout << p->dato << " ";
		showIn(p->Der);
	}
}


void insertTop(int dato)
{
	nodo* nuevo;
	nuevo = new nodo;
	nuevo->dato = dato;
	nuevo->sig = pInicio;
	pInicio = nuevo;
}


void Showlist(void) { Showlist(pInicio); }
void Showlist(nodo* s)
{
	cout << "La lista es:" << endl;
	while (s != NULL)
	{
		cout << s->dato << " ";
		int d = s->dato;
		insNodee(d);
		s = s->sig;
	}
}


int main()
{
	char resp;
	int dato;
	cout << "quiere agregar un valor? (s/n)?";
	cin >> resp;
	while (resp == 's')
	{
		cout << "Valor: ";
		cin >> dato;
		insertTop(dato);
		cout << "quiere agregar un valor? (s/n)?";
		cin >> resp;
	}
	Showlist();
	cout << "\nMOSTRAR ARBOL ( In - Orden):" << endl;
	showIn();
	return 0;
}