#include <iostream>
#include <string>

using namespace std;

int main()
{

	
	cout << "invertir numeros de un entero: ";

	int n = 0, digitos = 0;

	
	cout << "Introduce un valor entero positivos : ";
	cin >> n;


	do
	{
		digitos  = n % 10;

		cout << digitos;

		n = n / 10;

	} while (n != 0);


	cout << endl;
	return 0;
}