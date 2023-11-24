#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << a << "\t" << &a << endl;

    string name = "Paul";

    cout << name << "\t" << &name << endl; // com o '&' temos acesso a referencia


    
    return 0;
}