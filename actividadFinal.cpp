#include <iostream>
#include <cmath>
using namespace std;

double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    cout << "Ingrese la coordenada de P1 (x1): ";
    cin >> x1;
    cout << "Ingrese la coordenada de P1 (y1): ";
    cin >> y1;

    cout << "Ingrese la coordenada de P2 (x2): ";
    cin >> x2;
    cout << "Ingrese la coordenada de P2 (y2): ";
    cin >> y2;

    double distancia = calcularDistancia(x1, y1, x2, y2);

    cout << "La distancia entre los dos puntos es: " << distancia << endl;

    system("pause");
    return 0;
}
