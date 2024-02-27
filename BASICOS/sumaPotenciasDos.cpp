
// 2⁰ + 2¹ + 2² + 2³ + ...


#include <iostream>
using namespace std;

int main() {
    //Suma de potencias de 2
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += (1 << i);
    }
    cout << "La suma de las potencias de 2 hasta " << n << " es: " << suma << endl;
    return 0;
}
