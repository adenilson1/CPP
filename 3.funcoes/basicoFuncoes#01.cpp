#include <iostream>
using namespace std;


void sayHello(){ // que nao retorna nada
    cout << "Hello Word" << endl;
} 

void sayHelloTo(string name){ // funcao que recebe alguma coisa, mas nao retorna nada
    cout << "Hello " << name << " !"<< endl;
}

string returnHi(){ // funccao que nao recebe nada, mas retorna alguma coisa
    return "Hi";
}

string returnHiTo(string name){ // funcao que recebe e retorna alguma coisa
    return "Hi " + name + " !";
}

int main() {
    
    sayHello();
    sayHelloTo("Peter");
    sayHelloTo("Hanna");
    string result = returnHi();
    result.append(" !!!!!");
    cout << result << endl;

    cout << returnHi() << endl;

    cout << returnHiTo("Mike") << endl;
    cout << returnHiTo("Mary") << endl;

    return 0;
}