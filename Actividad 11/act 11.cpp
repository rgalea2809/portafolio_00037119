#include <iostream>
#include <string>

using namespace std;

int arreglo[10];

int pos (int size, int *frnt, int *cnt) {

	if (arreglo[0]==0) {
		return 0;
	}
	else {
		(*cnt)++;
		cout << "Frente: " << *frnt << "^ cantidad de dts: " << *cnt<<endl;
		return ((*frnt)+*cnt)%size; 
	}

}



int main() {
	int frente = 0;
	int size = 5;
	int cant = 0;

	arreglo[pos(5, &frente, &cant)] = 1;
	arreglo[pos(5, &frente, &cant)] = 2;
	arreglo[pos(5, &frente, &cant)] = 3;
	arreglo[pos(5, &frente, &cant)] = 4;
	arreglo[pos(5, &frente, &cant)] = 5;

	remove();


	for (int i = 0; i < 10; i++) {
		cout << "arreglo [" << i << "]: " << arreglo[i]<< endl;
	}

	return 0;
}