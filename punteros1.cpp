#include <iostream>
using namespace std;

int main(){
    int numero = 10;
    int *puntero; //DECLARACION DEL PUNTERO
    puntero = &numero; // ASIGNA LA DIRECCION DE LA VARIABLE
    cout<<"Direccion almacernada en puntero: "<< puntero << endl; //IMPRIME LA DIRECCION
    cout<<"Valor del puntero: "<< *puntero << endl; //VALOR DENTRO DE ESA DIRECCION

    return 0;
}
