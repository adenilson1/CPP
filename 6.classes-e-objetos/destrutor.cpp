// destrutor: quando um objeto é deletado da momoria
#include <iostream>
using namespace std;

class Person{
    public:
    string name;

    Person(string name) : name(name){ cout << "Hello my is "<< name << endl;}

    //Destrutor, simbolo ~
    ~Person(){ cout << name << " saying goodbye!" << endl;}
};

    void cratePerson(){
        Person p = {"John"};

    }

int main() {

    Person* p0 = new Person("May"); // nao esta associado ao escopo ao objeto criado. por nao é destruido

    Person p1 ("Peter");
    cratePerson();
    
   {
        Person p2("Mary");
        
        Person p3 = Person("Bob");
    }

    cout << "End of code" << endl;

    return 0;
}