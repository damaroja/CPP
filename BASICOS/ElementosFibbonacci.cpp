
int main() {
    //Suma de Fibonacci
    int n, a = 0, b = 1, c = 0;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;
    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
    return 0;
}
