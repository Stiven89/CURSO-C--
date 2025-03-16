/*
Escribe un programa en C++ que haga lo siguiente:

Solicite al usuario un n�mero entero positivo.
Calcule la suma de todos los n�meros enteros desde 1 hasta el n�mero ingresado.
Muestre el resultado en pantalla.*/ 

#include <iostream>

using namespace std;

int main (){
	cout << "==SUMA DE NUMEROS ENTEROS==" << endl;
	
	int num, suma = 0;
	
	cout << "Ingrese un numero entero: "; cin >> num;
	
	for (int i = 0; i <= num; i++){
		suma += i;
	}
	
	cout << "La suma de los numero de 1 a " << num << " es: " << suma << endl;
	return 0;
}



#CHAT

#include <iostream>
using namespace std;

int main() {
    cout << "== SUMA DE NUMEROS ENTEROS ==" << endl;

    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    int suma = (num * (num + 1)) / 2; // F�rmula matem�tica

    cout << "La suma de los numeros de 1 a " << num << " es: " << suma << endl;

    return 0;
}

