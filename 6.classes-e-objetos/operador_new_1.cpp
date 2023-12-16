// alocando na memoria heap com operador primitivos

#include <iostream>
using namespace std;

int main() {
    
    int x =5; // stack

    int* y =new int(10); // esse é modelo de armazenamento na memoria heap com um ponteiro ( 4bytes)

    cout << x * (*y) << endl;
    delete y; // forma de desalocar espaço na memoria heap. tem que ser feito manualmente pelo programador


    int* w = new int[100]; // alocando 400bytes
    w[49] = 123;
    cout << w[49] << endl;
    delete[] w;
    return 0;
}