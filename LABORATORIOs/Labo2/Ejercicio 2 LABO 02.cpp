#include <iostream>
#include <string>

using namespace std;

/*



int func(int n) {
	if (n == 0)
		return(0);
	return(n + func(n - 1));
}

*/


int func(int n) {
	if (n == 0)
		return(0);
	return(n + func(n - 1));
}

int main() {

	int numero = 0, result = 0;
	cin >> numero;	result=func(numero);
	cout << "\n\nRESULTADO: " << result;
}