#include <iostream>
using namespace std;

int main() {
    double primeiroNumero, segundoNumero, terceiroNumero, numeroMaior;

    cout << "Digite o primeiro numero: ";
    cin >> primeiroNumero;
    cout << "Digite o segundo numeros: ";
    cin >> segundoNumero;
    cout << "Digite o terceiro numeros: ";
    cin >> terceiroNumero;

    if (primeiroNumero >= segundoNumero && primeiroNumero >= terceiroNumero){
        numeroMaior = primeiroNumero;

    } else if (segundoNumero >= primeiroNumero && segundoNumero >= terceiroNumero){
            numeroMaior = segundoNumero;
    
        } else {
                numeroMaior = terceiroNumero;

            }  

    cout << "O maior numero eh: "<< numeroMaior << endl;

    return 0;
}