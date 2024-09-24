#include <iostream>
#include <cmath>
using namespace std;

double calcularCosto(double horas, int minutos) {
    double costoPorHora = 11.50;

    if (minutos > 0) {
        return costoPorHora * (minutos / 60.0) + calcularCosto(horas, 0);
    }
    if (horas > 0) {
        return costoPorHora + calcularCosto(horas - 1, minutos);
    }

    return 0;
}

int main() {
    double horas;
    int minutos;

    cout << "Ingrese la cantidad de horas en el estacionamiento: " << endl;
    cin >> horas;
    cout << "Ingrese la cantidad de minutos: " << endl;
    cin >> minutos;

    double costoTotal = calcularCosto(horas, minutos);

    cout << "El costo total es: $" << costoTotal << endl;

    system("pause");
    return 0;
}
