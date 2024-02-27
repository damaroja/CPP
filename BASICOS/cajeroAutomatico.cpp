


#include<iostream>

using namespace std;

int main()
{
    //Mostrar cajero automatico con menu
    int opcion;
    float saldo = 1000;
    float retiro;
    float deposito;
    float transferencia;
    float saldoTotal;
    int numeroCuentaDestino;
    int numeroCuentaOrigen;

    cout << "Bienvenido a su cajero automatico" << endl;
    cout << "1. Consultar saldo" << endl;   
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "4. Transferir dinero" << endl;
    cout << "5. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:
            cout << "Su saldo es: " << saldo << endl;
            break;
        case 2:
            cout << "Cuanto dinero desea retirar: ";
            cin >> retiro;
            saldoTotal = saldo - retiro;
            cout << "Su saldo actual es: " << saldoTotal << endl;
            break;
        case 3:
            cout << "Cuanto dinero desea depositar: ";
            cin >> deposito;
            saldoTotal = saldo + deposito;
            cout << "Su saldo actual es: " << saldoTotal << endl;
            break;
        case 4:
            cout << "Ingrese el numero de cuenta de origen: ";
            cin >> numeroCuentaOrigen;
            cout << "Ingrese el numero de cuenta de destino: ";
            cin >> numeroCuentaDestino;
            cout << "Cuanto dinero desea transferir: ";
            cin >> transferencia;
            saldoTotal = saldo - transferencia;
            cout << "Su saldo actual es: " << saldoTotal << endl;
            break;
        case 5:
            cout << "Gracias por usar el cajero automatico" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
    return 0;
}

