#include <iostream>
using namespace std;

// Función recursiva para encontrar el MCD
int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    // Llama recursivamente con (b, a % b)
    return mcd(a % b);
}

int main() {
    int num1, num2;
    cout << "Ingresa dos números enteros: ";
    cin >> num1 >> num2;

    int resultado = mcd(num1, num2);
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
