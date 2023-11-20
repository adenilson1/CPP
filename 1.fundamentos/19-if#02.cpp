#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number % 2 == 0 ){ // o erro da comando esta executando a sentença de codigo pelo ';' e não o bloco.
        cout << "Even number" << endl;
    }

    return 0;
}