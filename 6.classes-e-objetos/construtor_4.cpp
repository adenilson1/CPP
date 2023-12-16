 #include <iostream>
using namespace std;

class Actor{

    public:
    string name;
    string email;

    Actor(string name = "Anonymous", string email = "?????")
        : name(name), email(email) {} // outra forma de inicializar o valores dentro de uma clase

    string toString(){
        return this->name + " [" + this-> email + "]"; // pode usar o this dentro dos metodos

    }
};

int main() {

    Actor actor1;
    Actor actor2 ("Steve", "carrell@office.com");
    Actor actor3 ("John", "sobrenome@office.com");

    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;
    cout << actor3.toString() << endl;

    return 0;
}