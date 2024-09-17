/** 1.-Escriba un programa que nos permita hallar el
        área de un triángulo **/

#include <iostream>
using namespace std;

int main(){
    float base,altura,area;
    cout<<"Ingrese la base del triangulo:";
    cin>>base;

    cout<<"Ingrese la altura:";
    cin>>altura;

    area = (base*altura)/2;
    cout<<"El area es "<<area<<endl;
    system("pause");
    return 0;
}