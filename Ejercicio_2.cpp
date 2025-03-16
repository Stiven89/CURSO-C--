// Determine si el n�mero es par o impar.

#include <iostream>
using namespace std;

int main (){
	cout << "CALCULADORA DE PARES O IMPARES" << endl;
	cout << "\n----------------------------\n" << endl;
	
	
	int num;
	cout << "Ingrese un numero entero positivo: " << endl; cin >> num;
	
	if (num % 2 == 0){
		cout << "El numero es par " << endl;
	}
	else {
		cout <<"El numero es impar" << endl;		
	}
	return 0;
}


// CHAT

#include <iostream>
using namespace std;

int main() {
    cout << "=== CALCULADORA DE PARES O IMPARES ===\n";

    int num;

    // Entrada del usuario
    cout << "Ingrese un n�mero entero: ";
    cin >> num;

    // Verificaci�n y salida del resultado
    if (num == 0) {
        cout << "El n�mero 0 es considerado par." << endl;
    } else if (num % 2 == 0) {
        cout << "El n�mero " << num << " es par." << endl;
    } else {
        cout << "El n�mero " << num << " es impar." << endl;
    }

    return 0;
}

