#include <iostream>
using namespace std;

class Date { // uma classe tem atributos comportamentos/ atributos sao dados e as funcoes sao os metodos

    //atributos
    int day;
    int month;
    int year;

}; 

int main() {
    
    // objetos  a parte da classe Date
    Date d1;
    Date d2;
    cout << &d1 << endl;
    cout << &d2 << endl;

    return 0;
}

// nota: relação entre classe e objetos, cria-se um objeto aparte de uma classe
// classe define um tipo personalizados com atributos e comportamentos