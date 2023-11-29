#include <iostream>
using namespace std;

void incCopy(int value){
    value++;
    value++;
    value++;
}

void incRef(int& value){
    value++;
    value++;
    value++;
}

int main() {

    int x = 1;

    incCopy(x); // incrementeo por copia, nao muda nada, sem impacto
    cout << x << endl;

    incRef(x); // incremento por referencia.
    cout << x << endl;

    return 0;
}

