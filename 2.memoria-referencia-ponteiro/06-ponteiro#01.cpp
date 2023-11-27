#include <iostream>
using namespace std;

int main() {
    
    // ponteiro é uma variavelque armazena o endereço  cujo que valor aponta para outra variavel
    // uma variavel que aponta para um endereço de memoria

    int valor = 98765;
    int& ref = valor;
    int* pot = &valor;

    cout << valor << "\t" << ref << endl;
    cout << valor << "\t" << ref << "\t" << pot << endl;
    cout << valor << "\t" << ref << "\t" << *pot << endl;
    cout << &valor << "\t" << &ref << "\t" << pot << endl;

    return 0;
}