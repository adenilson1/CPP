#include <iostream>
using namespace std;

class Date {
 // deve-se definir qual é o tipo atributo vai ser : private ou public
 // pivado: acessivel pelo propria classe
 //publico: acessado fora da classe

 public:
    int day;
    int month;
    int year;
};

int main() {

    //instanciando um obejto d1 (criando um objeto)
    // pelo '.' o objeto acessa os atributos e os metodos da classe
    Date d1;
    d1.day = 3;
    d1.month = 11;
    d1.year = 2023;

    
    Date d2;
    d2.day = 31;
    d2.month = 12;
    d2.year = 2022;

    cout << d1.day << "/ " << d1.month << "/ " << d1.year << endl;
    cout << d2.day << "/ " << d2.month << "/ " << d2.year << endl;



    
 
    return 0;
}

/*relação entre claasse e objeto: classe é o projeto do objeto, definindo seus atributo,
podendo ser criados quantos objetos forem necesarios. uma classe modela o objeto. O objeto é  realização
do modelo(classe). nota,cada objeto tera seus propripios valores.
*/