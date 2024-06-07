#include <iostream>
using namespace std;

int encontrarMaximoNumero(int *numeros, int tamanio){
    int valorMaximo = *numeros;
    for (int i=0; i<tamanio; i++){
        if (*(numeros + i)> valorMaximo){
            valorMaximo = *(numeros + i);
        }
    }
    return valorMaximo;
}

int main(){
    cout << " Ingresar notas "
    cout <<  << endl;
    cout << maximoNumero << endl;
    int tamanio = sizeof(numeros)/sizeof(*numeros); //
    int maximoNumero = encontrarMaximoNumero(numeros, tamanio);
    cout << maximoNumero;
    return 0;
}
