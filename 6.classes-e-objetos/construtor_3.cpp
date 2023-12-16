#include <iostream>
using namespace std;

class Actor{

    public:
    string name;
    string email;

    // chamando um contrutor por outro construtor
    Actor() : Actor("Pedro"){};
    Actor(string name, string email = "?????"){

        cout << this << endl; // this = referencia, server diferença os paramentros 
       // (*this).name = name; // objeto referenciado
        //(*this).email = email;

        this->name = name; // mais usado
        this->email = email;

    }

    string toString(){
        return name + " [" + email + "]";

    }
};

int main() {

    Actor actor1;
    Actor actor2 ("Steve", "carrell@office.com");



    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;

    return 0;
}