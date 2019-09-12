// secuencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int serie;
	int suma;
	n = 0;
	suma = 0;
	serie = 2;
	cout << "Introduce el ultimo valor" << endl;
	cin >> n;
	while (serie <= n)
	{
		cout << serie << endl;
		// suma=+serie
		suma = suma + serie;
		serie = serie + 2;
	}
	cout << "La suma es: " << suma << endl;
	return 0;
}


