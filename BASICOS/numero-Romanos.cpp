#include<iostream>

using namespace std;

int main()
{
    //Transformar Entreo menor de tres mil a numeros romanos
    int numero;
    do
    {
        cout << "Introduce un numero entre 1 y 3000: ";
        cin >> numero;
    } while (numero < 1 || numero > 3000);
    int unidades = numero % 10;
    int decenas = numero / 10 % 10;
    int centenas = numero / 100 % 10;
    int millares = numero / 1000;
    cout << "El numero " << numero << " en romano es: ";
    switch (millares)
    {
    case 1: cout << "M"; break;
    case 2: cout << "MM"; break;
    case 3: cout << "MMM"; break;
    }
    switch (centenas)
    {
    case 1: cout << "C"; break;
    case 2: cout << "CC"; break;
    case 3: cout << "CCC"; break;
    case 4: cout << "CD"; break;
    case 5: cout << "D"; break;
    case 6: cout << "DC"; break;
    case 7: cout << "DCC"; break;
    case 8: cout << "DCCC"; break;
    case 9: cout << "CM"; break;
    }
    switch (decenas)
    {
    case 1: cout << "X"; break;
    case 2: cout << "XX"; break;
    case 3: cout << "XXX"; break;
    case 4: cout << "XL"; break;
    case 5: cout << "L"; break;
    case 6: cout << "LX"; break;
    case 7: cout << "LXX"; break;
    case 8: cout << "LXXX"; break;
    case 9: cout << "XC"; break;
    }
    switch (unidades)
    {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    }
    cout << endl;
    return 0;
}
