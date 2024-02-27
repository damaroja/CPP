


#include<iostream>

using namespace std;

int main()
{
    //Hacer un menu con tres opciones
    //1. Sumar dos numeros
    //2. Restar dos numeros
    //3. Salir
    //Si el usuario elige la opcion 1, se le pedira que ingrese dos numeros y se mostrara la suma
    //Si el usuario elige la opcion 2, se le pedira que ingrese dos numeros y se mostrara la resta
    //Si el usuario elige la opcion 3, el programa terminara
    int opcion;
    float num1, num2;
    do
    {
        cout << "Menu" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Restar dos numeros" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch(opcion)
        {
            case 1:
                cout << "Ingrese dos numeros: ";
                cin >> num1 >> num2;
                cout << "La suma es: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Ingrese dos numeros: ";
                cin >> num1 >> num2;
                cout << "La resta es: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while(opcion != 3);
    return 0;
}
