#include <iostream>
#include <string>

using namespace std;

int matriz[5][5];

int main() {

	for (int i = 0; i < 5; i++) {

		if (i == 0) {
			for (int a = 0; a < 5; a++) {
				cout << "\nIngrese el valor [0][" << a << "]: ";
				cin >> matriz[0][a];

			}
			
		}
		if (i == 1) {
			for (int b = i; b < 5; b++) {
				cout << "\nIngrese el valor [1][" << b << "]: ";
				cin >> matriz[1][b];
			}
		}
		if (i == 2) {
			for (int c = i; c < 5; c++) {
				cout << "\nIngrese el valor [2][" << c << "]: ";
				cin >> matriz[2][c];
			}
		}
		if (i == 3) {
			for (int d = i; d < 5; d++) {
				cout << "\nIngrese el valor [3][" << d << "]: ";
				cin >> matriz[3][d];
			}
		}
		if (i == 4) {
			for (int e = i; e < 5; e++) {
				cout << "\nIngrese el valor [4][" << e << "]: ";
				cin >> matriz[4][e];
			}
		}
	}

	cout << "\nMATRIZ DIAGONAL SUPERIOR: \n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j];
		}
		cout << endl;

	}



	return  0;

}