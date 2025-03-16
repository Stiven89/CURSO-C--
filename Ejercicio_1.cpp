/*
Escribe un programa en C++ que realice lo siguiente:

Solicite al usuario dos n�meros enteros.
Calcule la suma de ambos n�meros.
Muestre el resultado de la suma en pantalla 

*/ 


#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	cout << "SUMA DE DOS NUMEROS";
	cout << "\n--------------------\n";

	double num_1, num_2, suma;
	cout << "Ingrese un numnero entero: ";
	cin >> num_1;
	
	cout << "Ingrese un numnero entero: ";
	cin >> num_2;
	
	suma = num_1 + num_2;
	
	cout << "\nLa suma del numero: " << num_1 << " y " << num_2 << " es: " << suma << endl;
	return 0;
}
