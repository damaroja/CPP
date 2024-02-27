

// 1! + 2! + 3! + ... +n!

#include <iostream>
using namespace std;
#include <ncurses.h>

int main() {
    
    //Calcular la suma de factoriales de un número
    int n;
    int suma = 0;
    int factorial = 1;
    cout << "Ingrese un número: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        suma += factorial;
    }
    cout << "La suma de factoriales de " << n << " es: " << suma << endl;
    return 0;
}
