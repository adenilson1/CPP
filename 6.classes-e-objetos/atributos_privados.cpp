#include <iostream>
using namespace std;
// um elemento privado pode ser acesso por um metodo get(acessar valor) e set(configurar valor)

const double MINIMUM_WAGE = 1500;
class Employee{


    private:
    string name;
    double wage = MINIMUM_WAGE;

    public:

    string getName(){
        return name;
    }

    void setName(string name){
        this->name = name;
        
    }
    double getWage(){ // metodo que BUSCA o atributo privado
        return wage;
    }

    double setWage(double w){ // metodo que chama e configura o atributo privado
        if(w >= MINIMUM_WAGE){
             wage = w; // ENCAPSULAMENTO

        }

    }
};

int main() {

    Employee emp1;

    emp1.setName("Paul Smith");
    emp1.setWage(3000); // acessando o atributo pelo metodo 
       
    cout << "Name: " << emp1.getName() << endl; // acessando o atributo privado pelo metodo get
    cout << "US$ " << emp1.getWage() << endl; // acessando o atributo privado pelo metodo get
    return 0;
}