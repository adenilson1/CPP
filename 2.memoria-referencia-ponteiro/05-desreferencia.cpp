#include <iostream>
using namespace std;

int main() {
    
    double pi = 3.14;
    double& piRef = pi;

    cout << piRef << endl;
    cout << &piRef << endl;
    cout << &pi << endl;

    // * -> é o simbolo de desreferencia

    cout << *&pi << endl;
    cout << &*&*&pi << endl;

    return 0;
}