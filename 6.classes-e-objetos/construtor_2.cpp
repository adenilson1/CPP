//construtores sao metodos espciais para criar objetos a parte de uma classe
#include <iostream>
using namespace std;


class User{ 
    public: // atributos
    string name;
    string email;
 
    User() {} // construtor pagdrão

    User(string pname, string pemail){ // construtor que receber dois parametros
        name = pname;
        email = pemail;
    }

    string toString(){ // metodo
        return name + " [" + email + "]";
    }
};

int main() {
    // instanciando objeto construtor padrao
    User user1;
    user1.name = "Peter Johnson";
    user1.email = "Peter.john.123@zymail.com";

    //instaciando objeto com construtor com dois parametros
    User user2("Mary M", "aym@foo.com");
    User user3 = User("Mary M", "aym@foo.com"); // outra forma, forma explicita


    cout << user1.toString() << endl;
    cout << user2.toString() << endl;
    cout << user3.toString() << endl;
 

    return 0;
}