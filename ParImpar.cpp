/**Escriba un programa que diga si un numero
       entero ingresado es par o impar**/

#include <iostream>
using namespace std;
int main(){
   
    int numero;
    cout<<"Ingrese el numero:";
    cin>>numero;

    if(numero%2==0){
        cout<<"El numero es par"<<endl;
    }
    else{
        cout<<"El numero es impar"<<endl;
    }

    return 0;
}
